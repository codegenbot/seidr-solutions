def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)].lower() == target.lower():
            result.append(i)
        i += 1
    return result