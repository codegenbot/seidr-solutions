
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

    count = 0
    result = {}
    for char in test:
        if char != ' ':
            if char not in result:
                result[char] = 1
            else:
                result[char] += 1

    maximum = max(result.values())
    for key, value in result.items():
        if maximum == value:
            count += 1
    result = {}
    for char in test:
        if char != ' ':
            if char not in result:
                result[char] = 1
            else:
                result[char] += 1

    maximum = max(result.values())
    for key, value in result.items():
        if maximum == value:
            result[key] = value

    return result

    if count == len(result):
        return {}

    return result
    """
