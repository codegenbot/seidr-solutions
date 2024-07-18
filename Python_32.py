def find_zero(xs: list):
    return (xs[0] + xs[-1]) / 2

input_list = [float(x) for x in input().split()]
print(find_zero(input_list))