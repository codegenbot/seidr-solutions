def largest_smallest_integers(lst):
    largest_negative = None
    smallest_positive = None
    
    for num in lst:
        if num < 0:
            if largest_negative is None or num > largest_negative:
                largest_negative = num
        elif num > 0:
            if smallest_positive is None or num < smallest_positive:
                smallest_positive = num
                
    return (largest_negative, smallest_positive)