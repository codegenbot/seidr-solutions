```
def sort_even(l: list):
    even = sorted([abs(x) for x in l if abs(x) % 2 == 0])
    result = []
    idx = 0
    for x in l:
        if abs(x) % 2 == 0:
            result.append(even[idx] * (1 if x >= 0 else -1))
            idx += 1
        else:
            result.append(x)
    return tuple(result)