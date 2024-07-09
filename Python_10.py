def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string), -1, -1):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            prefix = string[:i][::-1]
            return prefix + string + postfix