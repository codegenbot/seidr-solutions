def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[-1]
    b = xs[-2]
    return -a / b

xs = list(map(float, input().split()))
result = find_zero(xs)
print(result)