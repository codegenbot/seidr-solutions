def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start = i
            while True:
                j = text.find(input(), start)
                if j == -1:
                    break
                result.append(j)
                start = j + 1
    return result