def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds_pos = sorted([abs(x) for x in l if x > 0 and x % 2 != 0], reverse=True)
    neg_odds = sorted([-x for x in l if x < 0 and x % 2 != 0])
    return evens + [i if i >= 0 else -i for i in odds_pos] + neg_odds