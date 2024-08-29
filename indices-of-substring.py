def indices_of_substring(text, target):
    result = []
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        result.append(pos)
        start = pos + len(target)
        while start < len(text) and text[start:].startswith(target):
            result.append(start)
            start += len(target)
    return sorted(result)