def indices_of_substring(text, target):
    return [
        text.find(target) if text.startswith(target) else -1
        for _ in range(len(text) // len(target)) + 1
    ]