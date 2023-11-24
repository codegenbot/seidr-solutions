import re

text = input().strip()
target = input().strip()

indices = [match.start() for match in re.finditer(f'(?={target})', text)]

print(" ".join(map(str, indices)))