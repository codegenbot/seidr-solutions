strings = []
try:
    while True:
        try:
            string = input().strip()
            if string == "----":
                break
            strings.append(string)
        except EOFError:
            break
except EOFError:
    pass