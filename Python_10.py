def make_palindrome(string):
    def is_palindrome(s):
        return s == s[::-1]

    if is_palindrome(string):
        return string
    else:
        return "".join(reversed(string))