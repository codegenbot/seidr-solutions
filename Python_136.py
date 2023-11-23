def largest_smallest_integers(lst):
    negatives = [num for num in lst if num < 0]
    positives = [num for num in lst if num > 0]
    return (max(negatives) if negatives else None, min(positives) if positives else None)