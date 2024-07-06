def largest_divisor(n: int) -> int:
    i = n - 1
    while i > 0:
        if n % i == 0:
            return i
        i -= 1