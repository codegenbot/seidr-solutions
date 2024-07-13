def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            result.append(str(i))
    return [int(x) for x in result]