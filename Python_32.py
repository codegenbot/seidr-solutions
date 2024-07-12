def find_zero():
    xs = []
    while True:
        line = input()
        if line == '':
            break
        xs.extend(map(float, line.split()))
    a, b = xs[-2:]
    return -b / a

result = find_zero()
print(result)