def make_palindrome(string):
    suffix = string[::-1]
    for i in range(len(suffix)):
        if suffix[:i+1] == suffix[:i+1][::-1]:
            break
    else:
        i = len(suffix)
    
    # Check if the input string is a palindrome
    if string != string[::-1]:
        return ""
    
    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + suffix[i:][::-1]