```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                index = text[i:].find(input())
                if index == -1: break
                result.append(i + index)
                i += index + 1
    return result