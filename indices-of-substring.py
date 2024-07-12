def indices_of_substring(text):
    target = input()
    result = []
    last_index = 0
    while True:
        pos = text.find(target, last_index)
        if pos == -1: 
            break
        result.append(pos)
        last_index = pos + 1
    return list(set(result))