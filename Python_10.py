def make_palindrome(string):
    # Reverse the input string
    rev = string[::-1]
    
    # Compare the reversed string with the original input
    if rev == string:
        return string + " is a palindrome"
    else:
        return string + " is not a palindrome"