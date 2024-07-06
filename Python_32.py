```
print("This program calculates the roots of a quadratic equation.")
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

b = float(input("Enter 'b' value: "))
c = float(input("Enter 'c' value: "))

if b**2 - 4 * a * c <= 0:
    print("This equation does not have real roots.")
else:
    r1 = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
    r2 = (-b - (b**2 - 4 * a * c) ** 0.5) / (2 * a)

    if r1.imag != 0 or r2.imag != 0:
        print(f"The equation has complex roots {r1} and {r2}.")
    else:
        print(f"Zeroes are approximately {r1:.2f} and {r2:.2f}")