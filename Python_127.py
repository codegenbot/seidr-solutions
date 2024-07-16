def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    start_intersection = max(start1, start2)
    end_intersection = min(end1, end2)
    if start_intersection > end_intersection:
        return "NO"
    length_intersection = end_intersection - start_intersection + 1
    return "YES" if is_prime(length_intersection) else "NO"