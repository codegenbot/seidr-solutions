def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                index = text[i:].find(target)
                if index == -1:
                    break
                else:
                    i += index
                    result.append(i)
    return result