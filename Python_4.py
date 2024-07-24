input_data = "1 2 3 4 5"
numbers = list(map(float, input_data.split()))
result = mean_absolute_deviation(numbers)
print(result)