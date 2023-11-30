try:
    numbers = list(map(int, input().split()))
    # Rest of the code
except ValueError:
    print("Invalid input. Please enter only numbers separated by space.")