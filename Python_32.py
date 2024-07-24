def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b

input_list = list(map(float, input().split()))
result = find_zero(input_list)
print(result)