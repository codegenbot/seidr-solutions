def largest_smallest_integers(lst):
    neg = [x for x in lst if x < 0]
    pos = [x for x in lst if x > 0]
    largest_neg = max(neg) if neg else None
    smallest_pos = min(pos) if pos else None
    return (largest_neg, smallest_pos)