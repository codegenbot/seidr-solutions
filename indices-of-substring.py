def indices_of_substring(text):
    target = input().lower()
    result = []
    for i in range(len(text)):
        if text[i:].lower().startswith(target):
            result.append(i)
    return result