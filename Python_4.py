def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviations = [abs(num - mean) for num in numbers]
    return sum(deviations) / len(deviations)

input_data = input("Enter numbers separated by space: ")
numbers = list(map(float, input_data.split()))
result = mean_absolute_deviation(numbers)
print(result)