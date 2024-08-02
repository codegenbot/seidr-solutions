def find_zero(xs: list):
    a, b = xs[-2], xs[-1]
    return 0 if a == 0 else -b / a

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)