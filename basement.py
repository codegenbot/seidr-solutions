```
def basement(input):
    total = 0
    seen_negative = False
    for i in range(len(input)):
        total += input[i]
        if total < 0:
            seen_negative = True
        elif seen_negative:
            return i + 1
    return -1