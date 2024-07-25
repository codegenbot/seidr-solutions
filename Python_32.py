def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b

# Receive input from the user
input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)