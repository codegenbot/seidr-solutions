def sort_third(l):
    return tuple(
        sorted((l[i : i + 3],) if len(l) >= 3 else (l,) for i in range(len(l) - 2))
        if len(l) > 1
        else (tuple(),)
    )