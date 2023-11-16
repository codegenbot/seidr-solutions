
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

    # Complete the following code
    # Hint: Use the split() method to get a list of words
    # Hint: Use the count() method to get the count of each word
    # Hint: Use the max() method to get the maximum count
    # Hint: Use the filter() method to get the words with the maximum count
    # Hint: Use the dict() method to create a dictionary from the words and the count
    # Hint: Use the list() method to convert the filter object to a list
    return dict(zip(list(filter(lambda x: test.count(x) == max(map(test.count, test.split())), test.split())),
                    [max(map(test.count, test.split()))] * len(list(filter(lambda x: test.count(x) == max(map(test.count, test.split())), test.split())))))
    """
