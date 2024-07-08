```
def mean_absolute_deviation(numbers):
    if len(numbers) == 0:
        return None
    sum = 0
    count = 0
    mean_val = statistics.mean(numbers)
    for num in numbers:
        sum += abs(num - mean_val)
        count += 1
    return sum / count