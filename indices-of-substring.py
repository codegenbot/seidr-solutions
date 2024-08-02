def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            result.append(str(i))
    return [int(x) for x in result]