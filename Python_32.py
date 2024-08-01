def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], max(xs[1:])
    return -b / a


# Read input as a list
input_list = list(map(int, input().split()))

# Call the function with the input list
result = find_zero(input_list)
print(result)