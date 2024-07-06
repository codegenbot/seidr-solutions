
def make_palindrome(string):
    rev = "".join(reversed(string))
    if rev == string:
        return rev
    else:
        return None