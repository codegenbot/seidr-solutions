def has_close_elements(numbers: List[float], threshold: float) -> bool:
    n = len(numbers)
    for i in range(n):
        for j in range(i+1, n):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False