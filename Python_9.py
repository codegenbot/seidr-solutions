numbers = []
while True:
    try:
        num = int(input().strip())
        numbers.append(num)
    except EOFError:
        break