def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b

# Input
nums = list(map(float, input().split()))

# Output
result = find_zero(nums)
print(result)