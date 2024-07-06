def make_palindrome(string):
    if not string:
        return "No palindrome"
    
    rev = string[::-1]
    
    if rev == string:
        return string + " is a palindrome"
    else:
        return string + " is not a palindrome"