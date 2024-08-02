if __name__ == "__main__":
    a, b, c = map(int, input().split())
    discriminant = (b**2) - (4 * a * c)
    if discriminant < 0:
        print(None)
    else:
        sqrt_discriminant = discriminant**0.5
        x1 = (-b + sqrt_discriminant) / (2 * a)
        x2 = (-b - sqrt_discriminant) / (2 * a)
        if x1 == x2:
            print(x1)
        else:
            print(x2, x1)