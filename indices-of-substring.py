```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = len(str(i))
            while True:
                try:
                    j = text.index(input()[start_index:], i)
                    result.append(j + start_index - 1)
                    start_index += 1
                except ValueError:
                    break
    return sorted(set(result))