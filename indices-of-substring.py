```
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                pos = text.find(target, start)
                if pos == -1:
                    break
                result.append(pos)
                start = pos + 1
    return result