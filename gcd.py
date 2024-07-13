```Python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = input("Enter text: ")
target = input("Enter target string: ")

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print(gcd(a, b))
print(find_indices(text, target))