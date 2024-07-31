def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower() and len(string) <= 1:
        return string
    for i in range(len(string)):
        prefix = string[: i + 1]
        postfix = string[i:][::-1]
        if prefix + postfix == prefix[::-1] + postfix:
            return prefix[::-1] + postfix
    return string + string[::-1]