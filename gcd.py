```Python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text.startswith(target, i):
            indices.append(i)
    return indices

while True:
    try:
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
        print(gcd(a, b))
        break
    except ValueError:
        print("Invalid input. Please enter integers.")
    
while True:
    try:
        text = input("Enter the text: ")
        target = input("Enter the target string: ")
        print(find_indices(text, target))
        break
    except ValueError:
        print("Invalid input. Please enter strings.")