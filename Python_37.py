```
def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])

    result = []
    even_index = 0
    min_len = min(len(evens), len(odds))

    for i in range(min_len):
        if i % 2 == 0:
            result.append(evens[i])
        else:
            result.append(odds[i])

    result += evens[even_index:]
    result += odds[min_len:]

    return tuple(result)