def indices_of_substring(text, target):
    indices = [
        i
        for i in range(len(text))
        if text[i:].startswith(target)
    ]
    return indices