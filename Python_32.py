def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = xs[-2]
    b = xs[-1]
    x = -a / b
    return x

input_list = list(map(float, input().split()))
result = find_zero(input_list)
print(result)