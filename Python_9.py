numbers = []
try:
    while True:
        num = input().strip()
        if num == "":
            break
        numbers.append(int(num))
except EOFError:
    pass