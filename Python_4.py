```
def mean_absolute_deviation(numbers):
    if len(numbers) == 0:
        return None
    total = 0
    count = 0
    mean_val = statistics.mean([n for n in numbers if isinstance(n, (int, float))])
    for num in [n for n in numbers if isinstance(n, (int, float))]:
        total += abs(num - mean_val)
        count += 1
    return total / count if count != 0 else None