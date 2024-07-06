
def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    if start1 <= end2 and start2 <= end1:
        length = min(end1, end2) - max(start1, start2) + 1
        return "YES" if is_prime(length) else "NO"
    else:
        return "NO"