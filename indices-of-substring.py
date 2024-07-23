import re

text = input()
target = input()

pattern = r'(?=({}))'.format(re.escape(target))
indices = [match.start(1) for match in re.finditer(pattern, text)]

for index in indices:
    print(index, end=" ")