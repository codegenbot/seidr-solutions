def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i >= len(text.split()[1]):
            if text[i : i + len(text.split()[1])] == text.split()[1]:
                result.append(str(i))
    return [int(x) for x in result]