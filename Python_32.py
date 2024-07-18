def find_zero(xs: list):
    x = xs[0] / xs[1]
    return x

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)