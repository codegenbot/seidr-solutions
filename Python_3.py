try:
    n = int(input("Please enter a number: "))
except ValueError:
    print("Invalid input. Please enter a valid integer.")
else:
    print(n)