```
def indices_of_substring(text, target):
    result = []
    while True:
        pos = text.find(target)
        if pos == -1: break
        result.append(pos)
        text = text[pos + len(target):]