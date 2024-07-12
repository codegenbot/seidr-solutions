def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i >= len(text[i : i + len(text)]):
            if text[i : i + len(text)] == text:
                result.append(i)
            else:
                for j in range(i, len(text) - len(text) + 1):
                    if text[j : j + len(text)] == text:
                        result.append(j)
    return result