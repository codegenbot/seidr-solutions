```
def sort_even(l: list):
    even = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    result = []
    for i, x in enumerate(l):
        if i % 2 == 0:
            result.append(even.pop(0))
        else:
            result.append(x)
    return result