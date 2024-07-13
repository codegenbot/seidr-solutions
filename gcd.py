```
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

num1, num2 = map(int, input().split())
print(gcd(num1, num2))

text, target = input(), input()
print(indices_of_substring(text, target))