def find_zero(xs: list):
    n = len(xs)
    if n >= 2:
        return -xs[0] / xs[-1]
    else:
        return 1.0

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)