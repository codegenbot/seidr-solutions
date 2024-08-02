def find_zero(a: int, b: int, c: int):
    discriminant = (b**2) - (4*a*c)
    if discriminant < 0:
        return None
    sqrt_discriminant = discriminant ** 0.5
    x1 = (-b + sqrt_discriminant) / (2 * a)
    x2 = (-b - sqrt_discriminant) / (2 * a)
    return x1 if x1 == x2 else (x1, x2)

# Test cases
if __name__ == "__main__":
    print(find_zero(1, -3, 2))  # Output: (2.0, 1.0)
    print(find_zero(1, 2, 1))  # Output: -1.0