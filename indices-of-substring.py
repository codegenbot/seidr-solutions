def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.startswith(target) and len(text) - i >= len(target):
            result.append(i)