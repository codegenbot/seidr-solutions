```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                j = len(input()) + i
                if not text[j:].startswith(input()):
                    break
                result.append(i)
    return result