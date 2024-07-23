def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)  
        pos = text.find(target, pos)  # Start searching from the last found position

    return result