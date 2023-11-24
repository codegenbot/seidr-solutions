import re

text = input()
target = input()

indices = [match.start() for match in re.finditer(f'(?={target})', text)]

print(" ".join(map(str, indices)))