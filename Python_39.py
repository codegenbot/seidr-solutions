try:
    n = int(input("Enter a number: "))
    result = n * 2 + 5
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid number.")