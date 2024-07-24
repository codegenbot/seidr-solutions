def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                pos = text[i:].find(target)
                if pos == -1:
                    break
                result.append(i + pos)
                i += pos + 1
    return result