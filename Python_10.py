def make_palindrome(string):
    if string == string[::-1]:
        return string
    suffix = string[::-1]
    prefix = string[: len(suffix)]
    return string + prefix + suffix