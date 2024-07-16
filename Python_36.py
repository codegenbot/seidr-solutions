def has_property(num: int) -> bool:
    return num % 11 == 0 and "7" in str(num) and num % 13 != 0


def fizz_buzz(n: int) -> int:
    count = (n // 11) * 9 + ((n // 11) + (n % 11 >= 7)) * 1

    return count