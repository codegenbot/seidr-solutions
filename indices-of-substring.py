```
def indices_of_substring(text):
    targets = input().split(",")
    result = []
    for t in targets:
        t = t.strip()
        if t:
            pos = text.find(t)
            while pos != -1:
                result.append(pos)
                pos = text.find(t, pos + len(t))
    return result