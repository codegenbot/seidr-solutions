def intersection(interval1, interval2):
    start = max(min(interval1), min(interval2))
    end = min(max(interval1), max(interval2))

    if start > end:
        return "NO"

    length = end - start + 1
    is_prime = (
        all(
            1 <= i <= int(length / 2) and length % i != 0
            for i in range(2, int(length**0.5) + 1)
        )
        or length < 2
    )

    return "YES" if is_prime else "NO"