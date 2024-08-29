Here is the completed code:

def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices

# Test cases
print(gcd(1, 1))  # 1
print(gcd(4, 400000))  # 4
print(gcd(54, 24))  # 6
print(gcd(4200, 3528))  # 168
print(gcd(820000, 63550))  # 2050