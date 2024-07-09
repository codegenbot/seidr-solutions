def indices_of_substring(text):
    target = input("Enter target string: ")
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            pos = text[i:].find(target)
            while pos != -1:
                result.append(i + pos)
                i += pos + 1
                pos = text[i:].find(target)
    return result