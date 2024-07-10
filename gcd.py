```Python
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            j = i
            while j < len(text) and text[j:j+len(target)] == target:
                result.append(j)
                j += 1
    return result

while True:
    try:
        num1 = int(input("Enter first integer: "))
        num2 = int(input("Enter second integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter integers.")

print(gcd(num1, num2))

while True:
    text = input("Enter the text: ")
    target = input("Enter the target: ")

    if len(text) > 0 and len(target) > 0:
        break
    else:
        print("Text and target should be non-empty strings.")

print(indices_of_substring(text, target))