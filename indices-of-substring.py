def indices_of_substring(text, target):
    result = [
        i + text.find(target, i) for i in range(len(text)) if text.find(target, i) != -1
    ]