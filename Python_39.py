try:
    n = int(input("Enter a number: "))  # Read and convert input to integer
except ValueError:
    print("Invalid input. Please enter an integer.")