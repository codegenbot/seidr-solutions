
def largest_smallest_integers(lst):
    negatives = []
    positives = []
    for num in lst:
        if num < 0:
            negatives.append(num)
        elif num > 0:
            positives.append(num)
    
    largest_negative = None
    smallest_positive = None
    if negatives:
        largest_negative = max(negatives)
    if positives:
        smallest_positive = min(positives)
    
    return (largest_negative, smallest_positive)