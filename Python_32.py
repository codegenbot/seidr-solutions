def find_zero():
    xs = list(map(float, input().strip().split()))
    a = xs[-2]
    b = xs[-1]
    return -b / a

result = find_zero()
print(result)