def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                try:
                    j = text.index(input(), i + 1)
                    end_index = j
                    result.append((start_index, end_index))
                    i = j
                except ValueError:
                    break
    return [i[0] for i in result]