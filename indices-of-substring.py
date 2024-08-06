```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                try:
                    end_index = text.index(input(), start_index + 1)
                except ValueError:
                    break
                result.append(start_index)
                start_index = end_index + 1
    return result