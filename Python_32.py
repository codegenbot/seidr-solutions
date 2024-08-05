def find_zero():
    xs = list(map(int, input("Enter space-separated list of numbers: ").split()))
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2] + a
    for i in range(3, n + 1):
        a, b = xs[-i] + a, a + b
    return -a / b

result = find_zero()
print(result)