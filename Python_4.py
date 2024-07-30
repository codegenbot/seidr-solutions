from statistics import mean, mean_absolute_deviation
try:
    print("Enter space-separated numbers:")
    numbers = list(map(float, input().strip().split()))
    result = mean_absolute_deviation(numbers, mean(numbers))
    print(f"Mean Absolute Deviation: {result}")
except Exception as e:
    print("Error reading input. Please enter valid numbers separated by spaces.")