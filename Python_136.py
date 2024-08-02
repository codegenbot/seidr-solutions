```
def largest_smallest_integers(lst):
    negative = [x for x in lst if x < 0]
    positive = [x for x in lst if x > 0]

    if negative:
        return (max(negative), None) if not positive else (max(negative), min(positive))
    elif positive:
        return (None, min(positive))
    else:
        return (None, None)