def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    for i in range(len(string), 0, -1):
        if not string[:i].ispalindrome():
            break
    return string[:i] + string[i:][::-1]


def ispalindrome(s: str) -> bool:
    return s == s[::-1]