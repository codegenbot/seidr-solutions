def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    x = -max_coeff / xs[-1]
    return x