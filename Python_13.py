
def greatest_common_divisor(a: int, b: int) -> int:
    if a == 0 or b == 0:
        return 0
    else:
        while b != 0:
            remainder = a % b
            a = b
            b = remainder
        return a