def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviations = [abs(num - mean) for num in numbers]
    return sum(deviations) / len(numbers)


numbers = list(
    map(float, input("Enter a list of float numbers separated by spaces: ").split())
)
result = mean_absolute_deviation(numbers)
print(result)