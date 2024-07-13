def indices_of_substring(text):
    target = "your_target_string"  
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result