def indices_of_substring(text, target):
    result = []
    for i, substring in enumerate(text):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos + i)  
    return result