def find_zero():
    xs = []
    while True:
        try:
            line = input().strip()
            if not line:
                break
            xs.extend(map(float, line.split()))
        except (EOFError, KeyboardInterrupt):
            break
    a, b = xs[-2:]
    return -b / a

result = find_zero()
print(result)