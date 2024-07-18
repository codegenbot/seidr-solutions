def find_zero(xs: list):
    n = len(xs) // 2
    a = xs[-1]
    b = xs[-2]
    return -b / a


# Read a list of numbers as input
xs = list(map(float, input().split()))

# Call the find_zero function with the input list
result = find_zero(xs)
print(result)