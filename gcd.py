```Python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = None
b = None
while not (isinstance(a, int) and isinstance(b, int)):
    try:
        a = int(input("Enter first integer: "))
        b = int(input("Enter second integer: "))
    except ValueError:
        print("Invalid input. Please enter integers.")

print(gcd(a, b))

def find_indices(text, target):
    return [i for i in range(len(text)-len(target)+1) if text.startswith(target, i)]

text = None
target = None
while not (isinstance(text, str) and isinstance(target, str)):
    try:
        text = input("Enter the text: ")
        target = input("Enter the target string: ")
    except ValueError:
        print("Invalid input. Please enter strings.")

print(find_indices(text, target))