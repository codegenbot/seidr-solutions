Here is the completed code:

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            palindromic_suffix = string[:i][::-1]
            if string + palindromic_suffix == palindromic_suffix + string:
                return string + palindromic_suffix
    else:
        for i in range(len(string), 0, -1):
            palindromic_suffix = ''.join(e for e in string[:i][::-1] if e.isalnum())
            if ''.join(e for e in (string + palindromic_suffix) if e.isalnum()) == ''.join(e for e in (palindromic_suffix + string) if e.isalnum()):
                return ''.join(e for e in (string + palindromic_suffix) if e.isalnum())
    return string