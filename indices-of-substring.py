```
def indices_of_substring(text, target):
    result = []
    pos = text.find(target)
    last_found_index = 0
    while last_found_index < len(text):
        if pos != -1:
            result.append(pos)
            last_found_index = pos + 1
            pos = text.find(target, last_found_index)
        else:
            break
    return result