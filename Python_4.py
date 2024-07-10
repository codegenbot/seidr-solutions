numbers = list(map(float, input().split()))
def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviations = [abs(num - mean) for num in numbers]
    return sum(deviations) / len(deviations)

result = mean_absolute_deviation(numbers)
print(result)