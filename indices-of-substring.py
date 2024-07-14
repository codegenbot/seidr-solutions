def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                try:
                    j = text.index(input(), i + 1)
                except ValueError:
                    break
                result.append(start_index + j)
                i = j
    return sorted(set(result))