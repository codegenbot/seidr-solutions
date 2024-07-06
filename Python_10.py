def make_palindrome(string):
    rev = string[::-1]
    return " ".join([c for c in string if c == rev[-1]]) + " is a palindrome"