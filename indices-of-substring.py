def indices_of_substring(text, target):
    return [
        i
        for i in range(len(text))
        if i + len(target) <= len(text) and text.startswith(target, i)
    ]