```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                end = i + len(input())
                if not text[end:].startswith(input()):
                    break
                i = end
            result.append(start)
    return result