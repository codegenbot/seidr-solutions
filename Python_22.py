def filter_integers(lst):
    return [x for x in lst if isinstance(x, int)]

filter_integers([1, 2, 'a', 3.0, {'x': 4}, '@#'])