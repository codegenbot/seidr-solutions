def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = text.index(input(), i)
            result.append(start_index)
    return result