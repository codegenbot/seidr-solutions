def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                start_index = text[i:].index(target) + i
                end_index = start_index + len(target)
                if not text[start_index:end_index].startswith(target):
                    break
                result.append(start_index)
                i = end_index
    return result