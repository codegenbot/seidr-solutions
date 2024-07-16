input_lines = []
try:
    while True:
        line = input().strip()
        if not line:
            break
        input_lines.append(list(map(int, line.split())))
except EOFError:
    pass