def largest_smallest_integers(lst):
    neg_integers = [num for num in lst if num < 0]
    pos_integers = [num for num in lst if num > 0]
    
    largest_neg = max(neg_integers) if neg_integers else None
    smallest_pos = min(pos_integers) if pos_integers else None
    
    return (largest_neg, smallest_pos)