numbers = []
try:
    while True:
        num = input().strip()
        if not num:
            raise EOFError
        numbers.append(int(num))
except EOFError:
    pass