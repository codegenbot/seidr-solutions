```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

def find_gcd():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
    print(f"GCD of {a} and {b} is {gcd(a, b)}")

def find_indices():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")
    print(f"Indices of '{target}' in '{text}': {get_indices(text, target)}")

find_gcd()
find_indices()