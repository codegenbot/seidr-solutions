try:
    while True:
        try:
            result = input("Enter a number: ")
            if result == "":
                break
            if result.isdigit():
                print(int(result))
        except EOFError:
            break
except KeyboardInterrupt:
    pass