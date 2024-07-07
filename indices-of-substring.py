def indices_of_substring(text, target):
    return [
        text.find(target)
        for _ in range(len(text) // len(target)) + 1
        if text.startswith(target)
    ]