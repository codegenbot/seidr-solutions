```
def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        found_pos = text.find(target, i)
        if found_pos == -1: break
        result.append(found_pos)
        i = found_pos + 1
    return result