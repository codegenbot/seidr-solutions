def make_palindrome(string):
    # Initialize a list to store the characters of the palindrome
    palindrome = []
    for i, c in enumerate(string):
        # Check if the character is already in the correct position for the palindrome
        if string[i] == string[-i - 1]:
            palindrome.append(c)
        else:
            # If not, then rearrange the characters to make it a palindrome
            palindrome.append(string[-i - 1])
            palindrome.append(c)
    # Handle odd-length inputs by appending the middle character twice
    if len(string) % 2 == 1:
        palindrome.append(palindrome[len(string) // 2 - 1])
    return "".join(palindrome)