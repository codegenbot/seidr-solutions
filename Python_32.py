def find_zero(xs: list):
    a, b, c = xs
    discriminant = (b**2) - (4 * a * c)
    if discriminant < 0:
        return None
    sqrt_discriminant = discriminant**0.5
    x1 = (-b + sqrt_discriminant) / (2 * a)
    x2 = (-b - sqrt_discriminant) / (2 * a)
    return x1 if x1 == x2 else (x1, x2)


# Get input from user
a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))

# Test the function with user input
print(find_zero([a, b, c]))