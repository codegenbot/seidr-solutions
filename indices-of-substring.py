def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        found_pos = text.find(target, pos)
        if found_pos == -1:
            break
        result.append(found_pos)
        pos = found_pos + 1
    return result