def indices_of_substring(input_text):
    target = input()
    result = []
    i = 0
    while i < len(input_text):
        pos = input_text.find(target, i)
        if pos != -1:
            result.append(pos)
            i = pos + 1
        else:
            break
    return result