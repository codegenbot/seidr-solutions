try:
    n = int(input("Enter the number of prime Fibonacci numbers to find: "))
except ValueError:
    print("Invalid input. Please enter a valid integer.")
    return