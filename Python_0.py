```
def has_close_elements(numbers: list[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i + 1] - numbers[i]) <= threshold:
            return False
    return True