def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[-1]
    b = xs[-2]
    x = -a / b
    return x

input_list = list(map(float, input("Enter space-separated list of numbers: ").split()))
result = find_zero(input_list)
print(result)