def largest_smallest_integers(lst):
    largest_neg = None
    smallest_pos = None
    for num in lst:
        if num < 0:
            if largest_neg is None or num > largest_neg:
                largest_neg = num
        elif num > 0:
            if smallest_pos is None or num < smallest_pos:
                smallest_pos = num
    return (largest_neg, smallest_pos)