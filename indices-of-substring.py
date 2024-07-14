```
def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        result.append(pos)
        pos = text.find(target, pos)
        if pos == -1:
            break
        pos += len(target)