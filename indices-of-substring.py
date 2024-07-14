def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        while text[i:].startswith(target):
            index = text[i:].index(target) + i
            result.append(index)
            i = index
    return result