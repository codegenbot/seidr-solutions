def largest_smallest_integers(lst):
    negatives = [x for x in lst if x < 0]
    positives = [x for x in lst if x > 0]

    return (
        max(negatives) if negatives else None,
        min(positives) if positives else None,
    )