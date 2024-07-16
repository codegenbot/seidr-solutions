def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)  
        if pos != -1:
            result.extend([i, pos])
    return result