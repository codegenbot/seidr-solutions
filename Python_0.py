try:
    while True:
        try:
            result = input()
            if not result:
                break
            print(int(result))
        except ValueError:
            break
except:
    pass