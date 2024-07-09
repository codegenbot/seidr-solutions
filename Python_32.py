def find_zero(xs: list):
    a, b = xs[0], xs[1]
    return -b / a

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)