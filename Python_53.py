def add():
    while True:
        try:
            input_string = input()
            if input_string.strip() == "":
                print()
                continue
            x, y = map(int, input_string.split())
            break
        except ValueError:
            print()
    return x + y

print(add())