def find_zero(xs: list):
    a, b = xs[0], xs[1]
    return -b / a

input_values = list(map(float, input().split()))
print(find_zero(input_values))