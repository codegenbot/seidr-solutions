def find_zero(xs: list) -> float:
    a, b = xs[-2:]
    return -b / a

result = find_zero(list(map(float, input().split())))
print(result)