def make_palindrome(string):
    rev_string = "".join(reversed([char for char in string if char.isalnum()])) + string
    return rev_string