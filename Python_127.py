```
def intersection(interval1, interval2):
    start1, end1 = interval1
    start2, end2 = interval2
    if start1 <= end2 and start2 <= end1:
        return "YES" if is_prime(max(start1, start2) - min(end1, end2)) else "NO"
    else:
        return "NO"

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
```