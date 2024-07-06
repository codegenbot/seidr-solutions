def make_palindrome(string):
    suffix = string[::-1]
    prefix = string[: len(suffix)]
    return string + prefix[::-1] + suffix[::-1]