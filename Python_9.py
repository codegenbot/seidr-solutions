numbers = []
try:
    while True:
        try:
            num = input().strip()
            if not num:
                break
            numbers.append(int(num))
        except EOFError:
            break
except EOFError:
    pass