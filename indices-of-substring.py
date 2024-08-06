def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i >= len(text[i:]):
            if text[i:] == text:
                result.append(i)
            else:
                j = text.find(text[i:], i)
                while j != -1:
                    result.append(i + j)
                    j = text.find(text[i:], i + j + 1)
    return result