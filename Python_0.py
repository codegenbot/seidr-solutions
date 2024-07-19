try:
    while True:
        result = input("Enter a number: ")
        if not result:
            break
        if result.isnumeric():
            print(int(result))
except:
    pass