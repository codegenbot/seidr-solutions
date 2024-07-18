def find_zero(xs: list):
    x = -xs[0] / xs[1]
    return x


try:
    input_list = list(map(int, input().split()))
    result = find_zero(input_list)
    print(result)
except ValueError:
    print("Invalid input. Please enter integers separated by spaces.")