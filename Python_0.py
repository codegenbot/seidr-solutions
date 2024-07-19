try:
    while True:
        result = input()
        if not result:
            break
        if result.isdigit():
            print(int(result))
        else:
            break
except:
    pass