def make_palindrome(string):
    # Find the longest postfix of supplied string that is a palindrome
    palindrome = ''
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            palindrome = string[i:]
            break
    
    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + palindrome[::-1]