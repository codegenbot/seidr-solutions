```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                try:
                    index = text.index(input(), start_index + 1)
                    result.append(index)
                    start_index = index
                except ValueError:
                    break
    return result