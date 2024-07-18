def find_zero(xs: list):
    x = -xs[0] / xs[1]
    return x

# Update the input reading line
input_list = list(map(int, input().strip().split()))

result = find_zero(input_list)
print(result)