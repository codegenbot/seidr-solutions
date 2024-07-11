```
def largest_smallest_integers(lst):
    negative_integers = [i for i in lst if i < 0]
    positive_integers = [i for i in lst if i > 0]

    if negative_integers:
        a = max(negative_integers)
    else:
        a = None

    if positive_integers:
        b = min(positive_integers)
    else:
        b = None

    return (a, b)