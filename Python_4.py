n = int(input())
numbers = list(map(float, input().split()))

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

result = mean_absolute_deviation(numbers)
print(result)