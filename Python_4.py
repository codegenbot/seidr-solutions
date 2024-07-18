try:
    numbers = list(map(float, input().split()))
except ValueError:
    print("Invalid input. Please enter a list of numbers separated by spaces.")
    exit(1)
result = mean_absolute_deviation(numbers)
print(result)