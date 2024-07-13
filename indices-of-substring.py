def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            pos = i
            while True:
                pos = text[i:].find(target)
                if pos == -1:
                    break
                result.append(pos + i)
                i += pos + 1
    return result