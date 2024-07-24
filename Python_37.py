def sort_even(l: list):
    evens = sorted(x for i, x in enumerate(l[::2]) if i % 2 == 0)
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if i % 2 != 0:
            result.append(x)
        else:
            result.append(next(y for _y in l[1::2] if _y == evens[even_index]))
            even_index += 1
    return result