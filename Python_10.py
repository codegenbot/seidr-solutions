def make_palindrome(string):
    suffix = string[::-1]
    prefix = string[: len(suffix)]
    if string == suffix:
        return string + prefix
    else:
        return string + prefix + suffix