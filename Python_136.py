def largest_smallest_integers(lst):
    neg_integers = [num for num in lst if num < 0]
    pos_integers = [num for num in lst if num > 0]
    
    largest_negative = max(neg_integers) if neg_integers else None
    smallest_positive = min(pos_integers) if pos_integers else None
    
    return (largest_negative, smallest_positive)