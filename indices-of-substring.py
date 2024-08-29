def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_idx = i
            while True:
                idx = text.find(input(), start_idx)
                if idx == -1:
                    break
                result.append(idx)
                start_idx = idx + 1
    return result