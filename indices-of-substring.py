```
def indices_of_substring(text):
    targets = [t.strip() for t in input().split(',')]
    result = []
    for t in targets:
        while True:
            pos = text.find(t)
            if pos == -1:
                break
            result.append(pos)
            text = text[pos+len(t):]
    return list(set(result))