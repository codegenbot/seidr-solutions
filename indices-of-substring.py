def indices_of_substring(text, target):
    result = [text.find(target)]
    last_found_index = text.find(target)
    while last_found_index != -1:
        pos = last_found_index
        result.append(pos)
        last_found_index = text.find(target, last_found_index + 1)
    return result