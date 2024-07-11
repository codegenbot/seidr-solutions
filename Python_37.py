def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    pos_odds = sorted([x for x in l if x > 0 and x % 2 != 0])
    neg_odds = sorted([x for x in l if x < 0 and abs(x) % 2 != 0])
    return evens + pos_odds + [i * -1 for i in neg_odds]