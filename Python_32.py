try:
    numbers = list(map(int, input().strip().split()))
except ValueError:
    print("Invalid input. Please enter integers separated by spaces.")