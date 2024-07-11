def sort_third(l: list):
    return [next(x for x, i in enumerate(l) if (i - l.index(x)) % 3 != 0) if i == 0 
            else sorted([x for x, _ in enumerate(l) if (index := i - l.index(x)) % 3 != 0])[0] 
            for index, _ in enumerate(l)]