def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    for i in range(len(string)):
        if string[i:].ispalindrome():
            return string + string[::-1][len(string) - i :]
    return string