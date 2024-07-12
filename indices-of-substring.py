def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                start_index = text.find(target, i)
                if start_index == -1:
                    break
                result.append(start_index)
                i = start_index + 1
    return sorted(result)