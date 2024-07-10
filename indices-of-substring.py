def indices_of_substring(text, target):
    result = [i for i in range(0, len(text)-len(target)+1) if text[i:i+len(target)].lower() == target.lower()] + [0] if text[:len(target)].lower() == target.lower() else []
    return result