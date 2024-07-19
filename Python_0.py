while True:
    try:
        result = input()
        if result == '':
            break
        if result.isdigit():
            print(int(result))
    except EOFError:
        break