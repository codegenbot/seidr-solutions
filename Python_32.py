def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[-1]
    b = xs[-2]
    x = -a / b
    return x


print("Enter space-separated list of numbers:")
input_list = list(map(float, input().split()))
result = find_zero(input_list)
print(result)