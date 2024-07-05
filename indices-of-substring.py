def indices_of_substring():
    text = input()
    result = []
    i = 0
    while True:
        target = input()
        i = text.find(target, i)
        if i == -1:
            break
        result.append(i)
        i += len(target)
    return sorted(result)