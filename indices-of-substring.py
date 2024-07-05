def indices_of_substring():
    text = input()
    result = []
    while True:
        target = input()
        i = text.find(target)
        if i == -1:
            break
        result.append(i)
    return sorted(result)