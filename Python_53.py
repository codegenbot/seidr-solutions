```
def add(a, b):
    if a < 0 or b < 0:
        return -1 * (abs(a) + abs(b))
    else:
        return a + b

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print(add(a, b))