def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs) - 2
    a = xs[-2]
    b = xs[-3] + a
    for i in range(4, n + 1):
        a, b = xs[-i] + a, a + b
    return -a / b 

result = find_zero()
print(result)