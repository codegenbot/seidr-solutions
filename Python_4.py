numbers = list(map(float, input().strip().split()))

def mean_absolute_deviation(numbers):
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

result = mean_absolute_deviation(numbers)
print(result)