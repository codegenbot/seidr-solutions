```
def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i:i+len(target)] == target:
            indices.append(i)
            i += len(target)
        else:
            i += 1
    return indices

# example usage:
print(gcd(1, 1)) 
print(indices_of_substring('hellohello', 'hello'))