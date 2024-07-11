from itertools import cycle


def sort_third(l: list):
    first_half = sorted([x for i, x in enumerate(l) if i % 3 != 0])
    second_half = sorted([x for i, x in enumerate(l) if i % 3 == 0], reverse=True)

    result = []
    for i, x in cycle(enumerate(l)):
        if i % 3 != 0:
            result.append(x)
        else:
            if len(first_half):
                result.append(next(item for item in first_half))
                del first_half[0]
            elif len(second_half):
                result.append(next(item for item in second_half))
                del second_half[0]
    return result