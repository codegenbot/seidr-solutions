def find_zero(xs: list):
    if len(xs) < 2:
        return None

    a = xs[-1]
    b = xs[-2]
    if b == 0:
        return None

    x = -a / b
    return x

input_list = list(map(float, input("Enter space-separated numbers: ").split())) if input() else []
result = find_zero(input_list)
print(result)