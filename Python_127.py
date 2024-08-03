def intersection(interval1, interval2):
    start = max(interval1[0], interval2[0])
    end = min(interval1[1], interval2[1])
    if start > end:
        return "NO"
    length = end - start + 1
    is_prime = all(
        1 < i <= math.sqrt(length) and length % i != 0
        for i in range(2, int(math.sqrt(length)) + 1)
    )
    return "YES" if is_prime else "NO"