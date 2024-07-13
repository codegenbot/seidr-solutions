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

while True:
    try:
        a = int(input("Enter first integer: "))
        b = int(input("Enter second integer: "))
        print(gcd(a, b))
        
        text = input("Enter text: ")
        target = input("Enter target: ")
        
        print(find_indices(text, target))
        break
    except ValueError:
        print("Invalid input. Please enter integers for the first two inputs and strings for the last two.")