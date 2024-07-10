def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                index = text[i:].find(input()) + i
                if index == len(text) - 1 or not text[index + 1 :].startswith(input()):
                    break
                result.append(index)
                i = index
    return sorted(set(result))