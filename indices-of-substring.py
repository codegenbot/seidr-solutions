def indices_of_substring(text):
    result = []
    index = 0
    while True:
        try:
            index = text.index(input(), index)
            result.append(index)
        except ValueError:
            break
    return result