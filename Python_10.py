
def make_palindrome(string):
    rev = "".join(reversed(string))
    palindrome = [rev, string]
    return "".join(palindrome)