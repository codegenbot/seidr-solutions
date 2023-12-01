from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = []
while True:
    try:
        string = input()
        strings.append(string)
    except EOFError:
        break

print(concatenate(strings))