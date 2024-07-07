def indices_of_substring(text, target):
    return [text.find(target) + 1 for _ in range(len(str(text).find(target)))]