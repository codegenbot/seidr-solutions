def make_palindrome(string):
    return "".join(reversed([char for char in string if char.isalnum()])) + string