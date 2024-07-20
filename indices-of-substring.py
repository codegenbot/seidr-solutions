def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].lower().startswith(input().lower()):
            result.append(i)
    return result