def make_palindrome(string):
    suffix = string[::-1]
    prefix = string[: len(suffix)]
    return string + suffix
``