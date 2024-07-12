try:
    n = int(input("Enter an integer: "))
    print("Integer entered:", n)
except ValueError:
    print("Invalid input. Please enter a valid integer.")