def intersection(interval1, interval2):
    start = max(min(interval1[0], interval2[0]), min(interval1[1], interval2[1]))
    end = min(max(interval1[0], interval2[0]), max(interval1[1], interval2[1]))

    if start <= end:
        length = end - start + 1
        is_prime = all(not i or length // i > 1 for i in range(2, int(length**0.5) + 1))
        return "YES" if is_prime else "NO"
    else:
        return "NO"