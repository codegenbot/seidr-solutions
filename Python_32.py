print("Enter 'a', 'b', 'c': ")
a = float(input())

while True:
    print("Enter non-zero values for 'a', 'b', 'c': ")
    b = float(input())
    c = float(input())

    if a == 0 or b**2 - 4 * a * c < 0:
        print("Invalid input. Please try again.")
    else:
        break

result = (-b + (b**2 - 4*a*c)**0.5) / (2 * a)
print(f"Zero is approximately {result}")