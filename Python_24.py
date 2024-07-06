def largest_divisor(n: int) -> int:
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return i
    return 1