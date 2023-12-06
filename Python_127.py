def intersection(interval1, interval2):
    start = max(interval1[0], interval2[0])
    end = min(interval1[1], interval2[1])
    if start <= end:
        length = end - start + 1
        if is_prime(length):
            return "YES"
        else:
            return "NO"
    else:
        return "NO"