def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    else:
        for i in range(len(string)):
            prefix = string[: i + 1]
            postfix = string[i:][::-1]
            if prefix + postfix == (prefix + postfix)[::-1]:
                return prefix + postfix