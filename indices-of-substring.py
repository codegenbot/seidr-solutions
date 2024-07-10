def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += 1 
            while (i + len(target)) <= len(text):
                i += 1
                if text[i:i+len(target)] == target:
                    result.append(i)
    return result