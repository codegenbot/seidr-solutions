def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if len(string) <= 1:
        return string
    for i in range(len(string), -1, -1):
        prefix = string[:i]
        postfix = string[i:]
        if is_palindrome(postfix):
            return prefix + postfix[::-1]