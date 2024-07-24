def indices_of_substring(text):
    target = text.strip()
    result = [0]
    for i in range(1, len(text)):
        if text[i:].startswith(target):
            result.append(i)
    return result