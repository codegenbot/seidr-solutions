def concatenate(strings):
    return ''.join(strings)

try:
    n = int(input().strip())
    strings = []

    for _ in range(n):
        string = input().strip()
        strings.append(string)

    result = concatenate(strings)

    print(result)

except EOFError:
    pass