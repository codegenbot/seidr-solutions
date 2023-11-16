
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

    # Complete the following code given the task description and function signature.
    # If you write more than 5 lines of code, you're doing it wrong.

    # 1. Split the string into a list of words.
    # 2. Initialize a dictionary with the letters of the alphabet.
    # 3. Iterate over the list of words.
    # 4. For each word, iterate over the letters.
    # 5. Increment the count of the letter in the dictionary.
    # 6. Find the highest count.
    # 7. Return a dictionary containing the letter(s) with the highest count.
    """
