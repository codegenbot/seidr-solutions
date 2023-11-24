import re

text = input().strip()
target = input().strip()

indices = [m.start() for m in re.finditer(f'(?={re.escape(target)})', text)]

print(" ".join(map(str, indices)))