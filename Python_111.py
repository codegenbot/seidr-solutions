
def most_frequent(given_list):
    """Given a list of lowercase letters, return the most frequent letter in the list.
    If several letters have the same occurrence, return the first one.

    Example:
    most_frequent(['a', 'b', 'c']) == 'a'
    most_frequent(['a', 'b', 'b', 'a']) == 'a'
    most_frequent(['a', 'b', 'c', 'a', 'b']) == 'a'
    most_frequent(['b', 'b', 'b', 'b', 'a']) == 'b'
    most_frequent([]) == None
    """
    pass


def histogram(test):
    """Given a string representing a space separated lowercase letters, return a dictionary
    of the letter with the most repetition and containing the corresponding count.
    If several letters have the same occurrence, return all of them.
    
    Example:
    histogram('a b c') == {'a': 1, 'b': 1, 'c': 1}
    histogram('a b b a') == {'a': 2, 'b': 2}
    histogram('a b c a b') == {'a': 2, 'b': 2}
    histogram('b b b b a') == {'b': 4}
    histogram('') == {}

    assert histogram("a") == {'a': 1}
    assert histogram("a a") == {'a': 2}
    assert histogram("a b") == {'a': 1, 'b': 1}
    assert histogram("a b a") == {'a': 2, 'b': 1}
    assert histogram("a b b") == {'a': 1, 'b': 2}
    assert histogram("a b b a") == {'a': 2, 'b': 2}
    assert histogram("a b b a b") == {'a': 2, 'b': 3}
    assert histogram("a b c a b") == {'a': 2, 'b': 2, 'c': 1}
    assert histogram("b b b b a") == {'b': 4, 'a': 1}
    assert histogram("") == {}
    """
