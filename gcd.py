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
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            result.append(i)
    return result

print(indices_of_substring(text, target))