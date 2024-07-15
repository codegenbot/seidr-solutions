```
def indices_of_substring(text, target):
    result = []
    last_found_index = text.find(target)
    while last_found_index != -1:
        result.append(last_found_index)
        last_found_index = text.find(target, last_found_index + 1)
    if not result:
        result = [0]
    return result