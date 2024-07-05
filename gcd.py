def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result

print(gcd(24, 54))
print(gcd(400000, 4))
print(gcd(3528, 4200))
print(gcd(63550, 820000))