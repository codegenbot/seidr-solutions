def make_palindrome(string):
    suffix = string[::-1]
    if not string.endswith(suffix):
        return string + suffix + suffix[::-1]
    else:
        return string + suffix[::-1]