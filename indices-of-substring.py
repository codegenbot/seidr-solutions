def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        pos = text[i:].find(target)
        while pos != -1:
            result.append(i + pos)
            pos = text[i+pos+len(target):].find(target)
    return result