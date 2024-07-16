numbers = []
try:
    while True:
        num = int(input().strip())
        numbers.append(num)
except EOFError:
    pass
except KeyboardInterrupt:
    pass