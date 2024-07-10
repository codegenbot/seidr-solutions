def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[n - 1] / xs[n]


input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)