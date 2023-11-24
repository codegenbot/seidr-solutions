import re

text = input().strip()
target = input().strip()

indices = [m.start() for m in re.finditer(f'(?={target})', text)]

print(*indices)