```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds_pos = sorted([x for x in l if x > 0 and x % 2 != 0])
    neg_odds = sorted([-x for x in l if x < 0 and x % 2 != 0]) 
    return evens + odds_pos + neg_odds