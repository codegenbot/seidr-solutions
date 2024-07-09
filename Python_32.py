def find_zero(xs: list):
    a, b = xs
    return -b / a

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)