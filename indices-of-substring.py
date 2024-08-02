def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = text.find(input(), i)
            while start_index != -1:
                result.append(start_index)
                i = start_index + 1
                start_index = text.find(input(), start_index)
    return sorted(list(set(result)))