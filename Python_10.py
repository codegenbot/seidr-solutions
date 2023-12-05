def make_palindrome(string):
    if string == string[::-1]:
        return string
    
    # Check if there are any suffixes that can be added to make the input string a palindrome
    for i in range(len(string)):
        if string[i:] + string[:i] == string[::-1]:
            return string[i:] + string[:i]
    
    # If no such suffix exists, then we should return the original input string
    return string