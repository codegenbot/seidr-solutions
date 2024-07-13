def indices_of_substring(text, target):
    if not target: 
        return [0] if text else []
    result = []
    if text.startswith(target):
        result.append(0)
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result