```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                index = text[i:].index(input()) + i
                result.append(index)
                i = index + len(input())
                if not text[i:].startswith(input()):
                    break
    return result