
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


    # Create an empty dictionary
    histogram = {}

    # Split the string into a list of words
    words = test.split()

    # Iterate through the list of words
    for word in words:

        # If the word is not in the dictionary, add it and set the count to 1
        if word not in histogram:
            histogram[word] = 1

        # If the word is in the dictionary, increment the count by 1
        else:
            histogram[word] += 1

    return histogram
    """
