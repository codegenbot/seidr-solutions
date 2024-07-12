def indices_of_substring(text):
    target = input()
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += len(target)  
        i += 1
    return list(set(result))