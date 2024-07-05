def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                index = text[i:i+len(target)].index(target)
                result.append(i + index)
                i += len(target)
    return sorted(result)