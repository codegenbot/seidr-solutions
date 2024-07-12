```python
def has_close_elements(numbers: list[float], threshold: float) -> bool:
    numbers = sorted(set(numbers))
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) <= threshold:
            return True
    return False