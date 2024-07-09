def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")
print([i for i in range(len(text) - len(target) + 1) if text.startswith(target, i)])