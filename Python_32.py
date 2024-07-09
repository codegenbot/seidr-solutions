def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        return "Input list should have at least 2 elements"
    a = xs[-1]
    b = xs[-2]
    return -b / a

try:
    xs = list(map(float, input().split()))
    if len(xs) < 2:
        raise ValueError("Input list should have at least 2 elements")
except ValueError as e:
    print(e)
else:
    result = find_zero(xs)
    print(result)