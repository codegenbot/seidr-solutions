def find_zero(xs: list):
    a = xs[-1]
    b = xs[-2]
    return -b / a

xs = list(map(float, input().split()))
print(find_zero(xs))