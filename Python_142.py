def sum_squares(n):
    return sum(i**2 for i in range(1, n+1))

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(sum_squares(n))