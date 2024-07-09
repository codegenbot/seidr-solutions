def indices_of_substring(text, target):
    result = []
    i = 0
    while i <= len(text) - len(target):
        if text[i:i+len(target)] == target:
            result.append(i)
        i = i + len(target) if text[i:i+len(target)] == target else i+1
    return result