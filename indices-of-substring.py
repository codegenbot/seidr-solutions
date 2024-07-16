import re

def indices_of_substring():
    text = input()
    target = input()
    result = [m.start() for m in re.finditer(target, text)]
    return result

print(indices_of_substring())