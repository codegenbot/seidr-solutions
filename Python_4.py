try:
    numbers = list(map(float, input().split()))
    numbers.sort()
    print(numbers)
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")