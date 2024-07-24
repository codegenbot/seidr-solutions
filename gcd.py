```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a) if a else 0

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(pos + 1)
        index += pos + 1
    return result

a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))