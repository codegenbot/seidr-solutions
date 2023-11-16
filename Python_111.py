
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

    letters = test.split()
    dic = {}
    for letter in letters:
        if letter not in dic:
            dic[letter] = 1
        else:
            dic[letter] += 1
    return dic


def most_common(dic):
    """Given a dictionary of letters and their corresponding count, return the
    letter with the most repetition and containing the corresponding count.
    If several letters have the same occurrence, return all of them.

    Example:
    most_common({'a': 1, 'b': 1, 'c': 1}) == {'a': 1, 'b': 1, 'c': 1}
    most_common({'a': 2, 'b': 2}) == {'a': 2, 'b': 2}
    most_common({'a': 2, 'b': 2, 'c': 1}) == {'a': 2, 'b': 2}
    most_common({'b': 4}) == {'b': 4}
    most_common({}) == {}
    """
    max_count = max(dic.values())
    result = {}
    for key, value in dic.items():
        if value == max_count:
            result[key] = value
    return result


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

    """
    letters = test.split()
    dic = {}
    for letter in letters:
        if letter not in dic:
            dic[letter] = 1
        else:
            dic[letter] += 1
    return most_common(dic)


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

    """
    letters = test.split()
    dic = {}
    for letter in letters:
        dic[letter] = dic.get(letter, 0) + 1
    return most_common(dic)


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

    """
    letters = test.split()
    dic = {}
    for letter in letters:
        dic[letter] = dic.get(letter, 0) + 1
    max_count = max(dic.values())
    return {key: value for key, value in dic.items() if value == max_count}


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

    """
    letters = test.split()
    dic = {}
    for letter in letters:
        dic[letter] = dic.get(letter, 0) + 1
    max_count = max(dic.values())
    return {key: value for key, value in dic.items() if value == max_count}


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

    """
    letters = test.split()
    dic = {}
    for letter in letters:
        dic[letter] = dic.get(letter, 0) + 1
    max_count = max(dic.values())
    return {key: value for key, value in dic.items() if value == max_count}


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

    """
    letters = test.split()
    dic = {}
    for letter in letters:
        dic[letter] = dic.get(letter, 0) + 1
    max_count = max(dic.values())
    return {key: value for key, value in dic.items() if value == max_count}
    """
