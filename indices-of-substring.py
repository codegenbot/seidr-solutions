def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        start_index = pos
        end_index = pos + len(target) - 1
        result.append((start_index, end_index))
        i = pos + 1

    return [i[0] for i in result]