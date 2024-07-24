def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b


input_list = list(map(float, input().split()))
output = find_zero(input_list)
print(output)