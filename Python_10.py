def make_palindrome(input_string):
    rev = input_string[::-1]
    return " ".join([c for c in input_string if c == rev[-1]]) + " is a palindrome"