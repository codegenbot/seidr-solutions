Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    else:
        for i in range(len(string)):
            prefix = string[:i+1]
            suffix = string[i:][::-1]
            if prefix + suffix == string:
                return prefix + suffix
        return string + string[::-1]