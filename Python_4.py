from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    total = 0
    count = 0
    for num in numbers:
        if isinstance(num, (int, float)):
            total += abs(num - sum(numbers) / len(numbers))
            count += 1
        else:
            return 0
    return total / count if count > 0 else 0