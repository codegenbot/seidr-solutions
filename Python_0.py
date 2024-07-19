try:
    while True:
        result = input()
        if not result:
            break
        if result.isdigit():
            print(int(result))
except EOFError:
    pass