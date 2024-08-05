def find_zero(xs):
    n = len(xs)
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n):
        a, b = xs[-i] + a, a + b
    return -a / b

# Input reading and function call
xs = list(map(int, input().split()))
result = find_zero(xs)
print(result)