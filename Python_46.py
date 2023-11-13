

def check_if_valid(graph, start, end):
    """
    Given a dictionary graph, a start vertex and an end vertex, return a boolean indicating if there exists a path
    from start to end.
    >>> check_if_valid({'a': {'b'}, 'b': {'c'}, 'c': {'a'}}, 'a', 'c')
    True
    >>> check_if_valid({'a': {'b'}, 'b': {'c'}, 'c': {'d'}}, 'a', 'd')
    False
    >>> check_if_valid({'a': {'b'}, 'b': {'c'}, 'c': {'d'}, 'd': {'a'}}, 'a', 'd')
    True
    """
