def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers.sort()
    n = len(numbers)
    median = numbers[n // 2] if n % 2 else (numbers[n // 2 - 1] + numbers[n // 2]) / 2
    return sum(abs(num - median) for num in numbers) / n