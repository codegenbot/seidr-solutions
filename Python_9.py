numbers = []
while True:
    try:
        num = input()
        if not num:
            break
        numbers.append(int(num))
    except EOFError:
        break