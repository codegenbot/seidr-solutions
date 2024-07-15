```
def find_indices(text, target):
    result = []
    i = 0
    while True:
        try:
            i = text.index(target, i)
            result.append(i)
            i += len(target)
        except ValueError:
            break
    return result