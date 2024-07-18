def mean_absolute_deviation(numbers):
    n = len(numbers)
    mean = sum(numbers) / n
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / n

numbers = list(map(float, input().strip().split()))
result = mean_absolute_deviation(numbers)
print(result)