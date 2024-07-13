def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = i
            while True:
                j = text[j+len(target):].find(target) + j + len(target)
                if j == len(text) - 1 or not text[j+len(target):].startswith(target):
                    break
                result.append(j)
    return result