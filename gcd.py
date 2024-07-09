```python
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        pos = text.find(target, i)
        if pos != -1:
            indices.append(pos)
            i = pos + 1
        else:
            break
    return indices


while True:
    try:
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
        print(gcd(a, b))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

while True:
    try:
        text = input("Enter the text: ")
        target = input("Enter the target string: ")
        print(indices_of_substring(text, target))
        break
    except ValueError:
        print("Invalid input. Please enter a string.")