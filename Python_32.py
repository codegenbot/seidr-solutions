def find_zero():
    xs = list(map(int, input().split()))
    n = len(xs)
    if n != 2:
        return None
    a = xs[0]
    b = xs[1]
    if b == 0:
        return None
    x = -a / b
    return x

result = find_zero()
print(result)