def truncate_number(number: float) -> float:
    integer_part = int(abs(number))
    fractional_part = abs(number) - integer_part
    return number if fractional_part >= 1e-6 else 0