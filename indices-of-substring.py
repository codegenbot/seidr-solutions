```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_idx = i
            while True:
                index = text.find(input(), start_idx)
                if index == -1:
                    break
                result.append(index)
                start_idx = index + 1
    return result