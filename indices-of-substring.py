def indices_of_substring(text, target):
    result = []
    start_index = 0

    while True:
        start_index = text.find(target, start_index)

        if start_index == -1:
            break

        result.append(start_index)
        start_index += 1

    return result