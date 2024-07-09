def gcd(a, b):
    if b == 0:
        return abs(a)
    else:
        return gcd(b, a % b)

def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1: 
            break
        result.append(pos)
        start = pos + 1
    return result

print(gcd(10, 5))  
print(indices_of_substring('banana', 'ana'))