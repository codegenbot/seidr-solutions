def make_palindrome(string):
    rev = string[::-1]
    if rev == string:
        return string + " is a palindrome"
    else:
        return string + "r" + string[::-1] + " is not a palindrome"