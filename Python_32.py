def find_zero():
    xs = map(float, iter(input, ""))
    a, b = xs[-2:]
    return -b / a

result = find_zero()
print(result)