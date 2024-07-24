```
def gcd(a, b):
    if not (isinstance(a, int) and isinstance(b, int)):
        return "Invalid input for GCD. Please enter integers."
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    if not (isinstance(text, str) and isinstance(target, str)):
        return "Invalid input for indices of substring. Please enter strings."

    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                result.append(start)
                start += len(target)
                if text[start:] != target:
                    break
    return result

a = input("Enter the first number: ")
b = input("Enter the second number: ")

print(gcd(int(a), int(b)))

text = input("Enter a text: ")
target = input("Enter a target string: ")

print(indices_of_substring(text, target))