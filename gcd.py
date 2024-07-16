```
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print(gcd(a, b))

text = input("Enter text: ")
target = input("Enter target: ")

print(indices_of_substring(text, target))


def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result