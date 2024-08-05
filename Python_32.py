def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n + 1):
        a, b = xs[-i] + a, a + b
    return -a / b

input_list = [2, 3, 5, -3, 6]
result = find_zero(input_list)
print(result)