def find_zero(xs: list):
    x = -xs[0] / xs[1]
    return x


input_str = input()
input_list = list(map(int, input_str.split()))
if len(input_list) != 2:
    raise ValueError("Input should contain exactly two integers separated by a space")

result = find_zero(input_list)
print(result)