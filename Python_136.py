def largest_smallest_integers(lst):
    negatives = [num for num in lst if num < 0]
    positives = [num for num in lst if num > 0]
    
    largest_negative = max(negatives) if negatives else None
    smallest_positive = min(positives) if positives else None
    
    return (largest_negative, smallest_positive)