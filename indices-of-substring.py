```
def indices_of_substring(text, target):
    result = []
    last_found_index = 0
    while last_found_index < len(text):
        if pos := text.find(target, last_found_index) == 0:
            result.append(0)
        elif pos != -1:
            result.append(pos)
            last_found_index = pos + 1
        else:
            break
    return result