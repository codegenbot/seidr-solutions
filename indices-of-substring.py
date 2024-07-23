def indices_of_substring(text):
    result = []
    start_index = 0
    while start_index < len(text):
        target_start_index = text.find(target, start_index)
        if target_start_index == -1:
            break
        result.append(target_start_index)
        start_index = target_start_index + 1
    return result


text = input()
target = input()

print(indices_of_substring(text))