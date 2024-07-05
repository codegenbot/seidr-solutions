def indices_of_substring(text):
    target = "8k17e"
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                index = text[i:].find(target)
                if index == -1:
                    break
                result.append(i + index)
                i += index + 1
    return sorted(result)