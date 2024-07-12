def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    else:
        for i in range(len(string)):
            prefix = string[: i + 1]
            postfix = string[i:][::-1] if i < len(string) else ""
            if prefix + postfix == (prefix + postfix)[::1]:
                return prefix + postfix