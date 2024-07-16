def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        while text[i:].startswith(target):
            result.append(i)
            i += len(target)
    return result