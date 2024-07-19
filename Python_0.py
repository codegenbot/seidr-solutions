try:
    while True:
        try:
            result = int(input())
            print(result)
        except ValueError:
            break
except:
    pass