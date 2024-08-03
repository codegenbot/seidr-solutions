def largest_smallest_integers(lst):
    neg = max((x for x in lst if x < 0), default=None)
    pos = min((x for x in lst if x > 0), default=None)
    return (neg, pos)