```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                j = text[i:].index(input()) + i
                result.append(j)
                i = j + len(input())
                if not text[i:].startswith(input()):
                    break
    return result