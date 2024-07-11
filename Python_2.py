```
def truncate_number(number: float = None, n: int) -> float:
    if number is None:
        raise ValueError("Number is required")
    multiplier = 10**-n
    return round(number * multiplier) / multiplier