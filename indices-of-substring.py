def indices_of_substring(text):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(text[start:], 1)
        if pos == -1:
            break
        result.append(start + pos)
        start += pos + 1
    return sorted(result)