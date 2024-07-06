def largest_smallest_integers(lst):
    negative_integers = [x for x in lst if x < 0]
    positive_integers = [x for x in lst if x > 0]

    return (
        max(negative_integers) if negative_integers else None,
        min(positive_integers) if positive_integers else None,
    )