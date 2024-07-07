```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                idx = text[i:].index(input()) + i
                result.append(idx)
                i = idx
                if not text[idx+len(input())-1:idx].startswith(input()):
                    break
    return result