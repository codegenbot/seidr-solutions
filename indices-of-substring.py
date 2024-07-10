def indices_of_substring(text, target): 
    result = [0] if text.startswith(target) else []
    if text.startswith(target):
        result.append(0)
    i = 1
    while i <= len(text) - len(target):
        if text[i:i+len(target)] == target:
            result.append(i)
        i += 1
    return result