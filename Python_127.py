def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    if max(start1, start2) <= min(end1, end2):
        return "YES"
    else:
        return "NO"