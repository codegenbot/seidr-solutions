def make_palindrome(string):
    if string == "".join(reversed(string)):
        return string
    else:
        return string + "".join(reversed(string))