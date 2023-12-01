def largest_smallest_integers(lst):
    neg_integers = [num for num in lst if num < 0]
    pos_integers = [num for num in lst if num > 0]
    return (max(neg_integers) if neg_integers else None, min(pos_integers) if pos_integers else None)