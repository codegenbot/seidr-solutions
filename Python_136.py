```
def largest_smallest_integers(lst):
    negative = [i for i in lst if i < 0]
    positive = [i for i in lst if i > 0]

    if len(negative) == 0:
        return (None, min(positive) if positive else None)
    elif len(positive) == 0:
        return (max(negative), None)
    else:
        return (max(negative), min(positive))