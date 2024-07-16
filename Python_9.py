numbers = []
try:
    while True:
        num = input().strip()
        if not num:
            break
        numbers.append(int(num))
except EOFError:
    pass