import re

def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [match.start() for match in re.finditer(f'(?={target})', text)]
    for idx in indices:
        print(idx)

indices_of_substring()