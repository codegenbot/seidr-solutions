def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower() and string == string[::-1]:
        return string
    for i in range(len(string), -1, -1):
        postfix = string[i:]
        if is_palindrome(postfix):
            prefix = string[:i]
            return prefix + postfix + prefix[::-1]