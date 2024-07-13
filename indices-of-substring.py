```
def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_idx = i
            while True:
                start_idx = text.find(input(), start_idx)
                if start_idx == -1:
                    break
                result.append(start_idx)
                start_idx += 1
    return result