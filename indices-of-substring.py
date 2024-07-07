def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            while True:
                index = text.find(target, start_index)
                if index == -1:
                    break
                result.append(index)
                start_index = index + 1
    return result