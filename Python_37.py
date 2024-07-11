```
def sort_even(l):
    evens = sorted([x for x in l if x % 2 == 0])
    neg_odds = sorted([-x for x in l if x < 0 and x % 2 != 0], key=lambda x: -abs(x))
    odds_pos = sorted([x for x in l if x > 0 and x % 2 != 0], key=lambda x: abs(x))
    return evens + neg_odds + odds_pos