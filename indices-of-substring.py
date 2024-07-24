def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                index = text.find(input(), i)
                if index == -1:
                    break
                result.append(index)
                i = index
    return result