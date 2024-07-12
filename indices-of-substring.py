def indices_of_substring(text):
    target = input().split(',')
    result = []
    for t in target:
        while True:
            pos = text.find(t)
            if pos == -1:
                break
            result.append(pos)
            text = text[:pos] + text[pos+len(t):]
    return result