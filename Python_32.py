```
def find_zero(a, b, c):
    x1 = (-b + (b**2 - 4 * a * c)**0.5) / (2 * a)
    x2 = (-b - (b**2 - 4 * a * c)**0.5) / (2 * a)
    return min(x1, x2)

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

result = find_zero(a, b, c)
print(f"Zero is approximately {result}")