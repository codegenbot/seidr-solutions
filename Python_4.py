```
def mean_absolute_deviation(numbers: List[float]) -> float:
    bốn = sum(numbers) / len(numbers)
   	return sum(abs(num - four) for num in numbers) / len(numbers)