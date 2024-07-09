strings = []
while True:
    try:
        line = input()
        if not line:
            break
        strings.append(line)
    except EOFError:
        break

result = max(strings, key=len)
print(result)