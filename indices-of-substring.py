import re

text = "Enter the text string"
target = "Enter the target string"

indices = [match.start() for match in re.finditer(f'(?={target})', text)]

print(" ".join(map(str, indices)))