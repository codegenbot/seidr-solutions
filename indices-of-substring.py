def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = i
            while True:
                j = text[j:].index(input()) + j
                result.append(j)
                j += len(input())
                if not text[j:].startswith(input()):
                    break
    return result