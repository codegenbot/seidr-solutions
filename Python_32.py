def find_zero():
    a, b, c = [int(x) for x in input("Enter the coefficients a, b, c: ").split()]
    discriminant = (b**2) - (4 * a * c)
    if discriminant < 0:
        return None
    sqrt_discriminant = discriminant**0.5
    x1 = (-b + sqrt_discriminant) / (2 * a)
    x2 = (-b - sqrt_discriminant) / (2 * a)
    return x1 if x1 == x2 else (x1, x2)


if __name__ == "__main__":
    print(find_zero())
    print(find_zero())