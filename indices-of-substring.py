"""def indices_of_substring(text, target):
    result = []
    start_index = 0
    while start_index < len(text):
        start_index = text.find(target, start_index)
        if start_index != -1:
            result.append(start_index)
            start_index += len(target)  
        else:
            break
    return result"""