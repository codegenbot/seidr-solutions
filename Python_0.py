try:
    while True:
        result = input()
        if not result:
            break
        if result.isnumeric():
            print(int(result))
        else:
            break
except:
    pass