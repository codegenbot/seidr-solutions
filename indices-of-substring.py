def indices_of_substring(text, target):
    result = []
    last_found_index = 0
    while last_found_index < len(text):
        pos = text.find(target, last_found_index)
        if pos != -1:
            result.append(pos)
            last_found_index = pos + 1
        else:
            break
    return result