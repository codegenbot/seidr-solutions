def make_palindrome(string):
    # Check if the string is already a palindrome
    if is_palindrome(string):
        return string
    else:
        return string[::-1] + string


def is_palindrome(s):
    return s == s[::-1]