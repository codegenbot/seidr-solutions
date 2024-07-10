```
def has_close_elements(numbers: List[float], threshold: float) -> bool:
    """Check if there are two elements in the list that have a difference less than or equal to the given threshold."""
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False