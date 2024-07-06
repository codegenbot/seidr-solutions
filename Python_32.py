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

    if complex(0).imag != 0 or complex(0).imag != 0:
        print(f"The equation has complex roots {r1} and {r2}.")
    else:
        print(f"Zeroes are approximately {r1:.2f} and {r2:.2f}")