def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs) // 2
    a, b = xs[0], max(xs[1:])
    return -a / b


result = find_zero()
print(result)