```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                pos = text.find(input(), start_index)
                if pos == -1:
                    break
                result.append(pos)
                start_index = pos + 1
    return result