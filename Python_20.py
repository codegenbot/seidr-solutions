try:
    numbers = list(map(int, input().split()))
except ValueError:
    print("Invalid input. Please provide a list of integers separated by spaces.")