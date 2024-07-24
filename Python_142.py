def sum_squares(n):
    try:
        return sum(i**2 for i in range(1, n+1))
    except TypeError:
        return "Invalid input. Please enter a positive integer."

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please try again.")

print(sum_squares(n))