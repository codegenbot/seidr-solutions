def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos != -1:
        pos = text.find(target, pos)
        if pos != -1:
            result.append(pos)
        pos += len(target)