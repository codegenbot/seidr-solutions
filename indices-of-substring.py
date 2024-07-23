```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = text[i:].index(input()) + i
            while j < len(text) and text[j:].startswith(input()):
                j += len(input())
            result.append(i)
            while j < len(text) and text[j:].startswith(input()):
                j += len(input())
    return result