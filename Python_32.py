def find_zero(xs: list):
    if len(xs) < 2:
        return "Input list should contain at least 2 elements"
    a, b = xs[-1], xs[-2]
    return 0 if a == 0 else -b / a


input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)