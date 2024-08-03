```
def calculate_statistics(data: List[int]) -> Tuple[float, float]:
    if not data:
        return 0.0, 1.0
    total_sum = sum(data)
    product = 1.0
    for num in data:
        product *= num
    average = total_sum / len(data)
    return average, product