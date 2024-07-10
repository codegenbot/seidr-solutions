def indices_of_substring(text, target):
    result = []
    last_index = 0
    while last_index < len(text):
        last_index = text.find(target, last_index)
        if last_index != -1:
            result.append(last_index)
            if last_index + 1 < len(text) and text[0:last_index+1].startswith(target):
                last_index = last_index + 1
            else: 
                last_index += len(target)  
        else:
            continue
    return result