def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            palindromic_suffix = string[:i]
            if is_palindrome(palindromic_suffix):
                return string + string[::-1][len(string) :].lower()
    else:
        for i in range(len(string), 0, -1):
            palindromic_suffix = string[:i]
            if is_palindrome(palindromic_suffix.lower()):
                return string.capitalize() + string[::-1][len(string) :].lower()