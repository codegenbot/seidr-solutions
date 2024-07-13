def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i <= len(text[i : i + len(text)]):
            break
        if text[i : i + len(text)] == text:
            result.append(i)
    return result