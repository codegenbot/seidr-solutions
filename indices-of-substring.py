def indices_of_substring(text, target):
    return [text.find(target) + 1 for _ in range((len(text) - len(target)) // len(target)) + (text.endswith(target))]