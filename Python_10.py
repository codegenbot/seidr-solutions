def make_palindrome(string):
    return "".join([char for char in string if char.isalnum()]) + string[::-1]