try:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    # Rest of the code
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")