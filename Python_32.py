def find_zero():
    xs = [int(x) for x in input().split()]
    a, b, c = xs
    discriminant = (b**2) - (4*a*c)
    if discriminant < 0:
        return None
    sqrt_discriminant = discriminant ** 0.5
    x1 = (-b + sqrt_discriminant) / (2 * a)
    x2 = (-b - sqrt_discriminant) / (2 * a)
    return x1 if x1 == x2 else (x1, x2)

# Test cases
if __name__ == "__main__":
    values = input("Enter values for test case 1 (e.g., 1 -3 2): ")
    print(find_zero())
    
    values = input("Enter values for test case 2 (e.g., 1 2 1): ")
    print(find_zero())