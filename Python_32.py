def find_zero(xs: list):
    n = len(xs)
    a = xs[0]
    b = xs[-1]
    return -b / a

print("Enter at least two space-separated coefficients (e.g., '1 2'):")
input_list = list(map(float, input().split()))

while len(input_list) < 2:
    print("Please enter at least two coefficients.")
    input_list = list(map(float, input().split()))

result = find_zero(input_list)
print(result)