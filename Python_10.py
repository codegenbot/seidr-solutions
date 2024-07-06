def make_palindrome(string):
    rev_string = string[::-1]
    if rev_string.is_palindrome():
        return rev_string
    else:
        return string