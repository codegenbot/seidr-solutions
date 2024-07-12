def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[:i+1].startswith(input()):
            result.append(i)
    return result