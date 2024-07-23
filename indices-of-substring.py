def indices_of_substring(text, target):
    result = []
    i = text.find(target.lower())
    while i != -1:
        result.append(i)
        i = text.find(target.lower(), i + 1)