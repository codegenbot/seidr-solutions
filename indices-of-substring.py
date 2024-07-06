def indices_of_substring(text, target):
    result = []
    start_index = 0
    while start_index < len(text):
        found_index = text.find(target, start_index)
        if found_index != -1:
            result.append(found_index)
            start_index = found_index + len(target)
        else:
            break
    return result