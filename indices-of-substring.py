def indices_of_substring(text):
    result = []
    t = input()
    for i in range(len(text)):
        pos = text.find(t, i)
        while pos != -1:
            result.append(pos)
            i = pos + 1
            pos = text.find(t, i)
    return result