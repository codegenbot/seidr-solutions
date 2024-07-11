def truncate_number(number: float) -> float:
    multiplier = 10 ** (number.as_integer().log10() + 1)
    return int(multiplier * number) / multiplier