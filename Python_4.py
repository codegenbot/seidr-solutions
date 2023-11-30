try:
    numbers = list(map(int, raw_input().split()))
    # Rest of the code
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")