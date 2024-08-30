def indices_of_substring(text):
    target = input()
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos != -1:
            result.append(i + pos) 
            i += pos + len(target)  
        else:
            break
    return result