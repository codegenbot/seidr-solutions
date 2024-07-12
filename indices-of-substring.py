def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                start_index = text.find(target, i)
                if start_index == -1:
                    break
                result.append(start_index)
                i = start_index + len(target) - 1
    return sorted(result)