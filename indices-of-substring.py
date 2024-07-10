```
def indices_of_substring(text, target):
    result = []
    last_index = 0
    while last_index < len(text):
        found_index = text.find(target, last_index)
        if found_index != -1:
            result.append(found_index)
            last_index = found_index + len(target) - 1
        else:
            break
    return result