def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    original = string
    while not string.ispalindrome():
        for i in range(len(string), 0, -1):
            prefix = string[:i]
            postfix = string[i - 1 :: -1]
            if postfix + string == (postfix + string).lower():
                return original + postfix.lower()
    return original