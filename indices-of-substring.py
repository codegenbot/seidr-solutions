```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                pos = text.find(input(), start)
                if pos == -1:
                    break
                result.append(pos)
                start = pos + 1
    return result