def find_zero():
    xs = list(map(float, input().splitlines()[0].strip().split()))
    n = len(xs)
    a = xs[n - 1]
    b = xs[n - 2]
    return -b / a

result = find_zero()
print(result)