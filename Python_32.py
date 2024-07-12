def find_zero():
    xs = list(map(float, input().split()))[-2:]
    a, b = xs
    return -b / a

result = find_zero()
print(result)