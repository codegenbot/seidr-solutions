def make_palindrome(string):
    return "".join([char for char in string]) + string[::-1]