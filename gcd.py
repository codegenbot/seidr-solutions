```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

while True:
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        text = input("Enter the text: ")
        target = input("Enter the target: ")
        print(gcd(a, b))
        print(indices_of_substring(text, target))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")