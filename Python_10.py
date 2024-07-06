def make_palindrome(string):
    # Initialize a list to store the characters of the palindrome
    palindrome = []
    for i, c in enumerate(string):
        # Check if the character is already in the correct position for the palindrome
        if string[i] == string[-i - 1]:
            palindrome.append(c)
        else:
            # If not, then reverse the order of the remaining characters to make it a palindrome
            palindrome = [c] + palindrome + [c]
    return "".join(palindrome)