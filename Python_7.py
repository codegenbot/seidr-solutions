try:
    while True:
        try:
            string = input().strip()
        except EOFError:
            break
        if string == "----":
            break
        strings.append(string)
except EOFError:
    pass