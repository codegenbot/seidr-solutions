try:
    num = int(input("Enter an integer: "))
    print(solve(num))
except ValueError:
    print("Error: Please enter a valid integer.")