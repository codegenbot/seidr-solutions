def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    neg_odds = sorted([-abs(x) for x in l if x < 0 and x % 2 != 0]) + [0]
    odds_pos = sorted([x for x in l if x > 0 and x % 2 != 0])
    return neg_odds + [0] + odds_pos + evens