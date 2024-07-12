numbers = list(
    map(float, input("Enter a list of float numbers separated by spaces: ").split())
)
result = mean_absolute_deviation(numbers)
print(result)