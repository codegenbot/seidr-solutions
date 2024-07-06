def indices_of_substring(text, target):
    result = []
    prev_end = 0
    for i in range(len(text)):
        if text[i : i + len(target)] == target and prev_end <= i < i + len(target):
            result.append(i)
            prev_end = i + len(target)
    return result