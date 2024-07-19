try:
    numbers = list(map(float, input().split()))
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")