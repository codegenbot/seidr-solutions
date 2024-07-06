def make_palindrome(string):
    # Find the longest postfix of supplied string that is a palindrome
    suffix = string[::-1]
    for i in range(len(suffix)):
        if suffix[:i+1] == suffix[::-1][:i+1]:
            break
    else:
        i = len(string) - 1
    
    # If the input string is a palindrome, return it as is
    if string == string[::-1]:
        return string
    
    # Otherwise, append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + suffix[:i+1][::-1]