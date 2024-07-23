def sort_even(l: list):
    l.sort()
    pos_evens = [x for x in l if 0 <= x % 2]
    neg_odds = [-x for x in l if x % 2 != 0]
    return [(i, o) for i in sorted(pos_evens) for o in sorted(neg_odds)]