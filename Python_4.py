```
numbers = list(map(float, input("Enter numbers (space separated): ").split()))
def mean_absolute_deviation(numbers):
    average = sum(numbers) / len(numbers)
    deviations = [(num - average) for num in numbers]
    return sum(abs(x) for x in deviations) / len(deviations)
print(mean_absolute_deviation(numbers))