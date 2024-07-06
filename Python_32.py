```
print("Enter 'a', 'b', 'c': ")
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
    print("Enter non-zero values for 'b' and 'c': ")
    try:
        b = float(input())
        c = float(input())

        if b == 0 or c == 0:
            print("Please enter non-zero values.")
        elif b**2 - 4 * a * c < 0:
            print("Invalid input. Please try again.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter numbers.")

result = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
print(f"Zero is approximately {result}")