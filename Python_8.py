```
def calculate_stats(numbers: List[int]) -> Tuple[float, float]:
    if not numbers:
        return 0.0, 1.0
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    average = total_sum / len(numbers)
    return average, product