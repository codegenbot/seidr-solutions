```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print(f"GCD of {a} and {b} is {gcd(min(a, b), max(a, b))}")

def indices_of_substring(text, target):
    indices = []
    start_idx = 0
    while start_idx < len(text):
        pos = text.find(target, start_idx)
        if pos != -1:
            indices.append(pos)
            start_idx = pos + 1
        else:
            break
    return indices

text = input("Enter the text: ")
target = input("Enter the target: ")
print(indices_of_substring(text, target))