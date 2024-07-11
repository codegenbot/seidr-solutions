def intersection(interval1, interval2):
    start = max(min(interval1), min(interval2))
    end = min(max(interval1), max(interval2))

    if start > end:
        return "NO"

    length = end - start + 1

    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    return "YES" if is_prime(length) else "NO"