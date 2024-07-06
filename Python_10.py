def make_palindrome(string):
    suffix = string[::-1]
    prefix = string[:-1]
    return string + prefix[::-1] + suffix[::-1]