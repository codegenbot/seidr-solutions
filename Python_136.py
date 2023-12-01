def largest_smallest_integers(lst):
    neg_integers = [x for x in lst if x < 0]
    pos_integers = [x for x in lst if x > 0]
    
    max_neg = max(neg_integers) if neg_integers else None
    min_pos = min(pos_integers) if pos_integers else None
    
    return (max_neg, min_pos)