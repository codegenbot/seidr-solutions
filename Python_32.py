def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = max(xs, key=abs)
    b = -a
    return b