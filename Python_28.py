strings = []
while True:
    try:
        string = input()
        strings.append(string)
    except EOFError:
        break

strings.sort(reverse=True)
print("".join(strings))