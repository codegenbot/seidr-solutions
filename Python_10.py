def make_palindrome(string):
    # Initialize a list to store the characters of the palindrome
    palindrome = []
    for i, c in enumerate(string):
        # Check if the character is already in the correct position for the palindrome
        if string[i] == string[-i - 1]:
            palindrome.append(c)
        else:
            # If not, check if the character and its reverse are already in the list
            if c in palindrome and c in reversed(palindrome):
                continue
            # If not, then rearrange the characters to make it a palindrome
            palindrome.append(string[-i - 1])
            palindrome.append(c)
    return "".join(palindrome)[::-1]