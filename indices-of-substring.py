def indices_of_substring(text):
    result = []
    index = 0
    while index < len(text):
        position = text.find(target_string)
        if position != -1:
            result.append(position)
            index += position + len(target_string)
        else:
            break
    return result