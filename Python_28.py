from typing import List


def concatenate(strings: List[str]) -> str:
    return ''.join(strings)


# Read input line by line until EOF
strings = []
while True:
    try:
        string = input()
        strings.append(string)
    except EOFError:
        break

print(concatenate(strings))