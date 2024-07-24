def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n - 1] if n == 2 else 1.0

input_list = [int(input()) for _ in range(3)]
result = find_zero(input_list)
print(result)