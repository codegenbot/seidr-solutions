```python
def truncate_number(number: float = None, n: int) -> float:
    if number is None:
        raise ValueError("Number is required")
    print("Enter a number:")
    number = float(input())
    multiplier = 10**-n
    return round(number * multiplier) / multiplier