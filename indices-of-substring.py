def indices_of_substring(text):
    result = []
    target_index = 0
    while target_index < len(text):
        target_index = text.find(target, target_index)
        if target_index == -1:
            break
        result.append(target_index)
        target_index += 1
    return result