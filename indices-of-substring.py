def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                index = text.find(input(), i)
                if index == -1:
                    break
                result.append(index)
                i = index + 1
    return result