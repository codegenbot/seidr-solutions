try:
    while True:
        try:
            result = int(input())
            print(result)
        except (ValueError, EOFError):
            break
except:
    pass