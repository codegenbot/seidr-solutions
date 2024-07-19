numbers = []
try:
    numbers = list(map(float, input("Enter numbers separated by spaces: ").split()))
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")