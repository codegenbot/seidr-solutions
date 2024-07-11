```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    result = []

    while len(evens) > 0 and len(odds) > 0:
        if evens[0] <= odds[0]:
            result.append(evens.pop(0))
        else:
            result.append(odds.pop(0))

    result += evens
    result += odds
    return tuple(result)