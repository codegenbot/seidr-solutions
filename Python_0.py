def has_close_elements(numbers: List[float], threshold: float) -> bool:
    return any(abs(numbers[i] - numbers[j]) < threshold for i in range(len(numbers)) for j in range(i+1, len(numbers)))