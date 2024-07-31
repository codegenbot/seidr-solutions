def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.isalnum() and string.lower() == string.lower()[::-1]:
        return string + string[::-1]
    else:
        for i in range(len(string)):
            postfix = string[i:]
            if postfix == postfix[::-1] or postfix.lower() == postfix.lower()[::-1]:
                return string + postfix[::-1]
        return string + string[::-1]