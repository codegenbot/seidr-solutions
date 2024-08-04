```
def indices_of_substring(text):
    start_index = 0
    result = []
    while True:
        target_start_index = text.find(text[start_index:], len(str(start_index)))
        if target_start_index == -1:
            break
        result.append(target_start_index)
        start_index += target_start_index + 1
    return result