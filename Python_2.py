def truncate_number(number: float, n: int) -> float:
    multiplier = 10**-n
    return round(number * multiplier) / multiplier