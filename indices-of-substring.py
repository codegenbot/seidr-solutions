def find_indices(text, target):
    result = []
    for i, char in enumerate(text.lower()):
        if text[i:i+len(target)].lower() == target.lower():
            result.append(i) 
    return result