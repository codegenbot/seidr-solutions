
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

    hist = {}
    for i in test:
        hist[i] = hist.get(i, 0) + 1
    return hist

def most_common(hist):
    """Given a dictionary of letter occurence, return a list of letters with the most
    occurence.
    If several letters have the same occurrence, return all of them.

    Example:
    most_common({'a': 1, 'b': 1, 'c': 1}) == ['a', 'b', 'c']
    most_common({'a': 2, 'b': 2}) == ['a', 'b']
    most_common({'b': 4, 'a': 1}) == ['b']
    most_common({}) == []

    """
    """
