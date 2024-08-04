```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        i = text.find(target, i)
        if i == -1:
            break
        result.append(i + 1)
        i += 1
    return result

a = int(input())
b = int(input())
print(gcd(a, b))
text = input()
target = input()
print(indices_of_substring(text, target))