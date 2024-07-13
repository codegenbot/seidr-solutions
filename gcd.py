```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices

try:
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
    print(gcd(a, b))
except ValueError:
    print("Program did not receive expected input")

text = input("Enter text: ")
target = input("Enter target: ")

print(find_indices(text, target))