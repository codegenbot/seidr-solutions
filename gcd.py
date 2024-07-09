def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")
print(indices_of_substring(text, target))