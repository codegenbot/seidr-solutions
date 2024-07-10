def make_palindrome(string, i):
    return string + string[:i][::-1] if i > 0 else string