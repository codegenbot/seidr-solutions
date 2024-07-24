def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            result.append(i)
            while True:
                j = text[i + len(input()) :].find(input()) + i + len(input())
                if j == -1:
                    break
                result.append(j)
                i = j
    return result