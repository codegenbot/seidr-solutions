def sort_third(l: list):
    l.sort(reverse=True)
    result = [x for i, x in enumerate(reversed(l)) if (i+1) % 3 == 0]
    return result