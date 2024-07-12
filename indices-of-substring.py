```
def indices_of_substring(text):
    targets = input().split(',')
    result = []
    for t in targets:
        pos = 0
        while True:
            pos = text.find(t, pos)
            if pos == -1:
                break
            result.append(pos)
            pos += len(t)  
    return list(set(result))