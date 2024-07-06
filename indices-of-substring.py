
def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        match = text.find(target, start)
        if match == -1:
            break
        result.append(match)
        start = match + len(target)
    return result
