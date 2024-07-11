def sort_third(lst):
    if len(lst) % 3 == 0:
        return sorted([i for r in [list(lst[i:i+3]) for i in range(0, len(lst), 3)] for i in r])
    else:
        return "Input list should be a multiple of three"