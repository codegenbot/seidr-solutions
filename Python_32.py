def find_zero(xs):
    n = len(xs)
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n):
        a, b = xs[-i] + a, a + b
    return -a / b

# Example usage
input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)