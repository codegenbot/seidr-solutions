def hex_key(num):
    primes = {"B": True, "D": True}
    count = sum(
        1
        for digit in num.upper()
        if digit.isdigit() or (digit in primes and digit != "0")
    )
    return count