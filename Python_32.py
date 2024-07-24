def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n] if n == 2 else 1.0


input_list = map(int, input().split())
result = find_zero(list(input_list))
print(result)