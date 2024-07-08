from statistics import mean

def mean_absolute_deviation(numbers: list[float]) -> float:
    if len(numbers) == 0:
        return None
    total = 0
    count = 0
    avg = mean(numbers)
    for num in numbers:
        total += abs(num - avg)
        count += 1
    return total / count