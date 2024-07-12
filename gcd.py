def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print(gcd(a, b))

def find_indices(text, target):
    return [i for i in range(len(text)-len(target)+1) if text.startswith(target, i)]

text = input("Enter the text: ")
target = input("Enter the target string: ")

print(find_indices(text, target))