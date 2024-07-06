def intersection(interval1, interval2):
    start = max(interval1[0], interval2[0])
    end = min(interval1[1], interval2[1])
    if start <= end:
        length = end - start + 1
        return "YES" if is_prime(length) else "NO"
    else:
        return "NO"


def is_prime(n):
    # Implement a function to check if n is a prime number
    pass