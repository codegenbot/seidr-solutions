def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[-2]
    return -b / a


print("Enter space-separated coefficients:")
input_list = list(map(float, input().split()))

if len(input_list) != 3:
    print("Please provide exactly 3 coefficients for a quadratic polynomial.")
else:
    result = find_zero(input_list)
    print(result)