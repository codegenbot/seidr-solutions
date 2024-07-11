def truncate_number(number: float, n: int) -> float:
    multiplier = 10**-n
    result = round(number * multiplier) / multiplier
    return result