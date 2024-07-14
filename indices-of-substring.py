```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                pos = text[i:].index(input()) + i
                result.append(pos)
                i = pos + 1
                if not text[pos+1:].startswith(input()):
                    break
    return result