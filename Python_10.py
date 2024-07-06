def make_palindrome(string):
    def is_palindrome(string):
        """
        Check if a string is a palindrome.

        Args:
            string (str): The input string.

        Returns:
            bool: Whether the string is a palindrome or not.
        """
        return all(c == string[-i - 1] for i, c in enumerate(string))

    if is_palindrome(string):
        return string

    # Reverse the input string
    rev_string = string[::-1]

    # Find the first index where the characters are not the same
    i = 0
    while i < len(string) and string[i] == rev_string[i]:
        i += 1

    # If all characters are the same, return the original string
    if i == len(string):
        return string

    # Otherwise, append the reversed string to the end of the input string
    return string + rev_string[i:]