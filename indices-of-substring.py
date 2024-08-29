def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                j = text[i:].index(input()) + i
                result.append(j)
                i = j + 1
                if not text[j + 1 :].startswith(input()):
                    break
    return sorted(list(set(result)))