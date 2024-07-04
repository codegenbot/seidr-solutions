def concatenate(strings):
    return ''.join(strings)

input_strings = []
while True:
    try:
        line = input().strip()
        if line == "":
            break
        input_strings.append(line)
    except EOFError:
        break

result = concatenate(input_strings)
print(result)