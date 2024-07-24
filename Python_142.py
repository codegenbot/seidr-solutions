```
def sum_squares(n):
    return sum(i**2 for i in range(1, n+1))

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n <= 0:
            print("Please enter a positive integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please try again.")

print(sum_squares(n))