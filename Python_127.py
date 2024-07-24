```
def intersection(interval1, interval2):
    start = max(min(interval1[0], interval1[1]), min(interval2[0], interval2[1]))
    end = min(max(interval1[0], interval1[1]), max(interval2[0], interval2[1]))
    
    if start > end:
        return "NO"
    
    length = end - start + 1
    for i in range(2, int(length**0.5) + 1):
        if length % i == 0:
            return "NO"
    return "YES"