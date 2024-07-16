numbers = []
while True:
    try:
        num = input().strip()
        if num == "":
            break
        numbers.append(int(num))
    except KeyboardInterrupt:
        break