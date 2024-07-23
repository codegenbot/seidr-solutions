def indices_of_substring():
    input_string = input()
    target = input()
    result = []
    pos = 0
    while True:
        pos = input_string.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += len(target)

    return result

print(indices_of_substring())