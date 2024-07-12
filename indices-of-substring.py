def indices_of_substring(text):
    target = input().split(',')
    result = []
    for t in target:
        pos = 0
        while True:
            pos = text.find(t, pos)
            if pos == -1:
                break
            result.append(pos)
            pos += len(t)  
    return result