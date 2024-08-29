def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if input().lower() in text[i:].lower():
            result.append(i)
    return result