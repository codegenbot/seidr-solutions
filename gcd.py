```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")

def indices_of_substring(text, target):
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return indices

print(indices_of_substring(text, target))