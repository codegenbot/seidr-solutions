def indices_of_substring(text):
    target = input()  
    result = []
    start_index = 0
    while start_index < len(text):
        index = text.find(target, start_index)
        if index == -1:
            break
        result.append(index)
        start_index = index + 1
    return result