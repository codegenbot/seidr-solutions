def sort_even(l: list):
    evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])

    result = []
    even_index = 0
    odd_index = 0
    for _ in range(min(len(evens), len(odds))):
        if _ % 2 == 0:
            result.append(evens[even_index])
            even_index += 1
        else:
            result.append(odds[odd_index])
            odd_index += 1

    result.extend(evens[even_index:])
    if len(odds) > even_index:
        result.extend(odds[odd_index:])
    return tuple(result)