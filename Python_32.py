```
print("Enter 'a', 'b', 'c': ")
a = float(input())

while True:
    try:
        if a == 0:
            print("Please enter non-zero value for 'a'.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a number.")

print("Enter non-zero values for 'b' and 'c': ")
b = float(input())
c = float(input())

while True:
    try:
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