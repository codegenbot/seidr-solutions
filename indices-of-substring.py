def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            j = i
            while True:
                j = text[j:].find(input())
                if j == -1:
                    break
                result.append(i + j)
                i += j + 1
    return sorted(set(result))