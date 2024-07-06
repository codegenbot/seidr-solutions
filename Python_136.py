def largest_smallest_integers(lst):
    negative = [i for i in lst if i < 0]
    positive = [i for i in lst if i > 0]
    return (max(negative) if negative else None, min(positive) if positive else None)