try:
    numbers = list(map(int, input().strip().split()))
    # Rest of the code
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")