try:
    numbers = list(map(float, input().split()))
except ValueError:
    print("Invalid input. Please enter a list of numbers separated by spaces.")
    exit(1)

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

result = mean_absolute_deviation(numbers)
print(result)