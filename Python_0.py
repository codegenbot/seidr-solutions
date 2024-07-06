def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(1, len(numbers)):
        if abs(numbers[i] - numbers[i - 1]) <= threshold:
            return True
    return False