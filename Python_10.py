def make_palindrome(string):
    # Initialize a list to store the characters of the palindrome
    palindrome = []
    
    # Reverse the order of the input string
    rev_string = reversed(string)
    
    for i, c in enumerate(string):
        # Check if the character at this position is the same as its mirrored character
        if c == rev_string[i]:
            palindrome.append(c)
        else:
            # If not, then append the character at this position to the output list
            palindrome.append(rev_string[i])
    
    return "".join(palindrome)