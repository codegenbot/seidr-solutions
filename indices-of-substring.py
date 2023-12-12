import re

text = input()
target = input()

indices = [m.start() for m in re.finditer(f'(?={re.escape(target)})', text)]
print(' '.join(map(str, indices)))