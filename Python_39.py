def complete_code(n: int) -> int:
    sum_digits = sum(int(digit) for digit in str(n))
    return sum_digits