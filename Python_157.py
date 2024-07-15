def check_pythagorean_theorem(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

# Input values for a, b, c
a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

# Call the function and print the result
print(check_pythagorean_theorem(a, b, c))