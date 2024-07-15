def gcd(a, b):
    if not isinstance(a, int) or not isinstance(b, int):
        return 
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    if not isinstance(text, str) or not isinstance(target, str):
        return 
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos)
        start = pos + 1
    return result

a = input()
b = input()
print(gcd(int(a), int(b)))

text = input()
target = input()
print(indices_of_substring(text, target))