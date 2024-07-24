def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n] if n == 1 else 1.0

input_list = input().split()
input_list = list(map(int, input_list))

result = find_zero(input_list)
print(result)