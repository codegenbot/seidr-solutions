def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                start = text[i:].find(target) + i
                if start == -1:
                    break
                result.append(i+start)
                i = start
    return sorted(result)