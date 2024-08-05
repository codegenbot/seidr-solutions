def find_zero(xs):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n + 1):
        a, b = xs[-i] + a, a + b
    return -a / b

# Example usage
input_list = [1, 2, 3, 4, 5]  # Input list provided by the contest
result = find_zero(input_list)
print(result)