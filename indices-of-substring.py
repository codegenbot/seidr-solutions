def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            result.append(i + pos)
    return [i for n, i in enumerate(result) if i not in result[:n]]