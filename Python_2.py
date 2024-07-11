def truncate_number(number: float) -> float:
    integer_part = int(abs(number))
    fractional_part = abs(number) - integer_part
    return integer_part + (number >= 0) * fractional_part