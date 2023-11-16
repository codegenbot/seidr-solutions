
def histogram(text):
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
    hist = {}
    # Split the text into words
    words = text.split()
    # Iterate through the words
    for word in words:
        # Check if the word is in the dictionary
        if word in hist:
            # If it is, increment the count by 1
            hist[word] += 1
        else:
            # Otherwise, add it to the dictionary with a count of 1
            hist[word] = 1
    # Return the dictionary
    return hist
    """
