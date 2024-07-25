def find_zero(xs: list[int]) -> float:
    xs = list(map(int, input().split()))
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b