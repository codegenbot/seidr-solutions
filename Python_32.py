```
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
        b = float(input("Enter 'b' value: "))
        c = float(input("Enter 'c' value: "))

        if b == 0 or c == 0:
            print("Please enter non-zero values.")
        elif b**2 - 4 * a * c < 0:
            print("Invalid input. Please try again.")
        else:
            break
    break

result = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
print(f"Zero is approximately {result:.2f}")