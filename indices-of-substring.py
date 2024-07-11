def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
            while i + len(target) <= len(text) and text[i:i+len(target)] == target:
                i += 1
    return result