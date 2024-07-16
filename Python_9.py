numbers = []
try:
    while True:
        num = input()
        if not num:
            break
        numbers.append(int(num))
except EOFError:
    pass