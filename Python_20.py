try:
    numbers = list(map(float, input("Enter space-separated numbers: ").split()))
except ValueError:
    print("Invalid input. Please enter only numeric values separated by spaces.")