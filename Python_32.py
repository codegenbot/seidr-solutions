def find_zero(xs: list):
    if xs[1] == 0:
        return "Division by zero error"
    x = -xs[0] / xs[1]
    return x

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)