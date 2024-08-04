```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos + 1)
        pos += 1
    return result

print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))