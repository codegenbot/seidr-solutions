Here's the corrected code:

```
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")

def indices_of_substring(text, target):
    index = 0
    indices = []
    while index < len(text):
        pos = text.find(target)
        if pos != -1:
            indices.append(pos)
            index += pos + len(target)
        else:
            break
    return indices

print(indices_of_substring(text, target))