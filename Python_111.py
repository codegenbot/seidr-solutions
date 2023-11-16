def histogram(test):
    """Given a string representing a space separated lowercase letters, return a
    dictionary of the letter with the most repetition and containing the
    corresponding count.
    If several letters have the same occurrence, return all of them.

    Example:
    histogram('a b c') == {'a': 1, 'b': 1, 'c': 1}
    histogram('a b b a') == {'a': 2, 'b': 2}
    histogram('a b c a b') == {'a': 2, 'b': 2}
    histogram('b b b b a') == {'b': 4}
    #dictionary = {}
    #for i in test:
    #    dictionary[i] = test.count(i)
    #return dictionary
    #return {i: test.count(i) for i in test}
    #dictionary = {i: test.count(i) for i in test}
    #return {key: value for key, value in dictionary.items() if value == max(dictionary.values())}
    #return {key: value for key, value in {i: test.count(i) for i in test}.items() if value == max({i: test.count(i) for i in test}.values())}
    return {key: value for key, value in {i: test.count(i) for i in test.split()}.items() if value == max({i: test.count(i) for i in test.split()}.values())}
    histogram('') == {}
    """
