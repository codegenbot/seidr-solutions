
def make_palindrome(string):
    """
    Return a palindrome of the given string.

    A palindrome is a string that reads the same backward as forward.

    >>> make_palindrome('jerry')
    'yrrej'
    """
    # Initialize a list to store the characters of the palindrome
    palindrome = []
    for i, c in enumerate(string):
        # Check if the character is already in the correct position for the palindrome
        if string[i] == string[-i-1]:
            palindrome.append(c)
        else:
            # If not, then rearrange the characters to make it a palindrome
            palindrome.append(string[-i-1])
            palindrome.append(c)
    return "".join(palindrome)