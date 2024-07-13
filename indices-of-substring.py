def indices_of_substring(text, target):
    if not target: 
        return [0] if text else []
    result = [0] if text[:len(target)] == target else []
    for i in range(len(text)-len(target)+1):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result