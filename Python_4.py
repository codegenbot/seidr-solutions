try:
    numbers = list(map(float, input().split()))
    print(max(numbers))
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")