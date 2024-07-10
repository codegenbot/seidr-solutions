def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                pos = text[i:].index(input()) + i
                result.append(pos)
                i = pos
                if not text[pos + len(input()) :].startswith(input()):
                    break
    return result