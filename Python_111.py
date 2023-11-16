
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

    d = {}
    for i in test:
        if i == " ":
            continue
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    max_count = max(d.values())
    return {k: v for k, v in d.items() if v == max_count}


if __name__ == '__main__':
    print(histogram('a b c'))
    print(histogram('a b b a'))
    print(histogram('a b c a b'))
    print(histogram('b b b b a'))
    print(histogram(''))
    """
