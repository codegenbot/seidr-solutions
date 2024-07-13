```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = input("Enter text: ")
target = input("Enter target: ")

while True:
    try:
        a = int(input("Enter first integer: "))
        b = int(input("Enter second integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(find_indices(text, target))
print(gcd(a, b))

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