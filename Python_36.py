

def fizz_buzz(n: int):
    """Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
    if n <= 0:
        return 0
    elif n % 11 == 0:
        return fizz_buzz(n // 11) + 1
    elif n % 13 == 0:
        return fizz_buzz(n // 13) + 1
    else:
        return fizz_buzz(n // 10)
    """
    return fizz_buzz(n // 10)
