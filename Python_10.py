
def make_palindrome(string):
    # Initialize a list to store the characters of the palindrome
    palindrome = []
    for i in range(len(string)):
        if string[i] == string[-i - 1]:
            palindrome.append(string[i])
        else:
            return "".join(reversed(string))
    return "".join(palindrome)