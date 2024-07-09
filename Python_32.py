def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], xs[1]
    return -b / a

input_list = list(map(int, input("Enter list of integers separated by space: ").split()))
result = find_zero(input_list)
print(result)