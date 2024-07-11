```
def sort_third(l: list):
    indices = {x: i for i, x in enumerate(l)}
    min_val = float('inf')
    result = []
    for i, x in enumerate(sorted(l)):
        if (i) % 3 == 0:
            min_val = l[indices[x]]
        elif x < min_val:
            min_val = x
        result.append(x)
    return result