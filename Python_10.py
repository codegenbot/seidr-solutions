def make_palindrome(string):
    if len(string) % 2 == 1:
        string += string[-1]
    return string[::-1] + string