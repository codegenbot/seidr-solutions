def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[n], xs[n-1]
    return -b / a

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)