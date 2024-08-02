```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                pos = text[i:].find(input())
                if pos == -1:
                    break
                i += pos
                result.append(i)
    return result