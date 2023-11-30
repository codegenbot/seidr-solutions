try:
    numbers = list(map(float, input().split()))
    result = mean_absolute_deviation(numbers)
    print(result)
except (ValueError, TypeError):
    print("Invalid input. Please enter numbers only.")