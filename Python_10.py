def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    prefix = ""
    while len(string) > 0 and not string[0].isalnum():
        prefix += string[0]
        string = string[1:]
    postfix = string
    while len(postfix) > 0 and not postfix[-1].isalnum():
        postfix = postfix[:-1]
    if postfix == postfix[::-1]:
        return prefix + postfix
    for i in range(len(string), -1, -1):
        if string[:i] == string[:i][::-1]:
            return prefix + string[:i] + postfix[::-1]
    return prefix + postfix[::-1]