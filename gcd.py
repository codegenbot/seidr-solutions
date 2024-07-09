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
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices

print(indices_of_substring(text, target))