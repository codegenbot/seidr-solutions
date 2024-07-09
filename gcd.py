```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

text = input("Enter the text string: ")
target = input("Enter the target string: ")
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

print(gcd(a, b))
print(find_indices(text, target))