try:
    while True:
        result = input("Enter a number: ")
        if result == '':
            break
        if result.isdigit():
            print(int(result))
except EOFError:
    pass