def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = i
        while True:
            found_pos = text.find(target, pos)
            if found_pos == -1: break
            result.append(found_pos)
            pos = found_pos + 1
    return result