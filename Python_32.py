def find_zero():
    xs = []
    while True:
        try:
            line = input()
            xs.extend(map(float, line.split()))
        except EOFError:
            break
    a, b = xs[-2:]
    return -b / a

result = find_zero()
print(result)