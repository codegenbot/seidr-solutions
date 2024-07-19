try:
    while True:
        try:
            result = input()
            if not result:
                break
            if result.isnumeric():
                print(int(result))
        except EOFError:
            break
except EOFError:
    pass