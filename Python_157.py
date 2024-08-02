print("Enter the values of a, b, and c:")
a = int(input("a: "))
b = int(input("b: "))
c = int(input("c: "))

def check_pythagorean(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

result = check_pythagorean(a, b, c)
print(result)