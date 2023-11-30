strings = []
while True:
    string = input().strip()
    if not string:
        break
    strings.append(string)

def concatenate(strings: list) -> str:
    return ''.join(strings)

result = concatenate(strings)

print(result)