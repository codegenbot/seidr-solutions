def indices_of_substring(text, target):
    return [text.find(target)+1 if i==0 else text.find(target) for i in range(len(text)) if text[i:i+len(target)] == target]