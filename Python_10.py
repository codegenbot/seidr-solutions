```
def make_palindrome(string: str) -> str:
    # Find the longest postfix of supplied string that is a palindrome
    suffix = string[::-1]
    for i in range(len(suffix)):
        if suffix[:i+1] == suffix[:i+1][::-1]:
            break
    else:
        i = len(suffix)
    
    # Append to the end of the string reverse of a string prefix that comes before the palindromic suffix
    return string + suffix[i:][::-1]
```