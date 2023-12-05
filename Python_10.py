```
def make_palindrome(string):
    # Find the longest postfix of supplied string that is a palindrome
    suffix = ""
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            suffix = string[i:]
            break

    # If the input string is already a palindrome, return it unchanged
    if string == string[::-1]:
        return string

    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    prefix = string[:len(string) - len(suffix)]
    return string + prefix[::-1]
```