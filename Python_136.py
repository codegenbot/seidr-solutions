def largest_smallest_integers(lst):
    negative = [x for x in lst if x < 0]
    positive = [x for x in lst if x > 0]

    return (max(negative) if negative else None, min(positive) if positive else None)