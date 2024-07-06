```
print("This program calculates the root of a quadratic equation.")
print("Enter non-zero values for 'a', 'b', 'c': ")
while True:
    try:
        a = float(input())
        if a == 0:
            print("Please enter non-zero value for 'a'.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a number.")

while True:
    while True:
        try:
            b = float(input("Enter 'b' value: "))
            if b == 0:
                print("Please enter non-zero value for 'b'.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a number.")

    while True:
        try:
            c = float(input("Enter 'c' value: "))
            if c == 0:
                print("Please enter non-zero value for 'c'.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a number.")

    discriminant = b**2 - 4 * a * c
    if discriminant < 0:
        print("This equation does not have real roots.")
    else:
        root1 = (-b + math.sqrt(discriminant)) / (2 * a)
        root2 = (-b - math.sqrt(discriminant)) / (2 * a)
        if abs(root1) > abs(root2):
            print(f"Zero is approximately {root1:.2f} or {root2:.2f}")
        else:
            print(f"Zeros are approximately {root2:.2f} and {root1:.2f}")