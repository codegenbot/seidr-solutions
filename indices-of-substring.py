def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = i
            while True:
                j = text[j:].find(target) + j
                if j == len(text) - 1 or not text[j:].startswith(target):
                    break
                result.append(j)
    return result