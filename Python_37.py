def sort_even(l: list):
    l.sort()
    pos_evens = [x for x in l if 0 <= x % 2]
    neg_odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    return [(i, o) for i, o in zip(pos_evens, neg_odds)]