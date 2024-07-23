def indices_of_substring(text, target):
    return [text.find(target) + i for i in range(len(text)) if text.find(target) != -1]