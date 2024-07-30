def fizz_buzz(n: int):
    count = n // 11 + n // 13 - n // (11 * 13)
    return count