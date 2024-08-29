```
def indices_of_substring(text):
    start = 0
    positions = []
    while start < len(text):
        pos = text.find(input(), start)
        if pos == -1:
            break
        positions.append(pos)
        start = pos + 1
    return positions