```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = i
            while True:
                j = text[j:].find(input()) + j
                if j == len(text) - 1 or not text[j:].startswith(input()):
                    break
                result.append(j)
    return result