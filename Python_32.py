def find_zero():
    xs = []
    for line in iter(input, None):
        xs.extend(map(float, line.split()))
    a, b = xs[-2:]
    return -b / a

result = find_zero()
print(result)