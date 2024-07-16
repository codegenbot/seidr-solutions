numbers = []
while True:
    try:
        num = input().strip()
        if num == "":
            break
        numbers.append(int(num))
    except EOFError:
        break