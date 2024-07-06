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

    if b**2 - 4 * a * c >= 0:
        break

result = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
print(f"Zero is approximately {result:.2f}")