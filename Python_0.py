def has_close_elements(numbers: List[float], threshold: float) -> bool:
    sorted_numbers = sorted(numbers)
    for i in range(1, len(sorted_numbers)):
        if sorted_numbers[i] - sorted_numbers[i-1] < threshold:
            return True
    return False