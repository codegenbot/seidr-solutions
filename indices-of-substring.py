import re

text = input("Enter the text string: ")
target = input("Enter the target string: ")

indices = [match.start() for match in re.finditer(f'(?={target})', text)]

print(" ".join(map(str, indices)))