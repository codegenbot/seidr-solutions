def indices_of_substring(text, target):
    if not target: 
        return [0] if text else []
    result = [0] if text.startswith(target) else []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result