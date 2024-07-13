def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos)
        text = text[pos + len(target):]
    return indices

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
print(gcd(a, b))

text = input("Enter text: ")
target = input("Enter target: ")

print(find_indices(text, target))