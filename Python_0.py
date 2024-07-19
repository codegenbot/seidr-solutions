while True:
    try:
        result = input()
        if not result:
            break
        if result.isdigit():
            print(int(result))
    except EOFError:
        break