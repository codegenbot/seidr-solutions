def sort_third(l: list):
    return sorted([x for _, x in [(x, i+1) if (i+1) % 3 == 0 else None for i, x in enumerate(l)]
                  or [x for _, x in [(None, x) if (i+1) % 3 != 0 else None for i, x in enumerate(l)]])