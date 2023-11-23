def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i, num1 in enumerate(numbers):
        for j, num2 in enumerate(numbers):
            if i != j and abs(num1 - num2) < threshold:
                return True
    return False