def find_zero(xs: list):
    n = len(xs)
    a = xs[n - 1]
    b = xs[n - 2]
    return -b / a

# Take input from the user and call the find_zero function
input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)