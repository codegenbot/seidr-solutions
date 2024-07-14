def indices_of_substring(text):
    result = []
    target = input().lower()
    for i in range(len(text)):
        if text[i:].lower().startswith(target):
            result.append(i)
    return result