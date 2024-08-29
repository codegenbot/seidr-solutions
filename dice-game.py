def solve():
    n = int(input())
    m = int(input())
    if n < m:
        return 0.0
    return (n - 1) / (n * m)