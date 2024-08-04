```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    index = 0
    while index < len(text):
        if text[index:index+len(target)] == target:
            indices.append(index)
            index += len(target)
        else:
            index += 1
    return indices

a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))