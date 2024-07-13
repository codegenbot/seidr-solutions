```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            indices.append(pos)
        else:
            break
    return indices

text = input("Enter text: ")
target = input("Enter target: ")

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print(find_indices(text, target))
print(gcd(a, b))