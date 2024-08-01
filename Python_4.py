def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers.sort()
    median = numbers[len(numbers) // 2]
    return sum(abs(num - median) for num in numbers) / len(numbers)