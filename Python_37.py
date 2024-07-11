def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds_pos = sorted([x for x in l if x > 0 and x % 2 != 0])
    odds_neg = sorted([x for x in l if x < 0 and abs(x) % 2 != 0])
    return evens + odds_pos + odds_neg