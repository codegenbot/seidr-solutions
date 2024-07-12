def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.isupper():
        string = string.lower()
    for i in range(len(string), -1, -1):
        if string[:i] + string[i:][::-1] != string:
            continue
        return string[:i] + string[i:][::-1]
    return string + string[::-1]