def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        postfix = string[i:]
        if is_palindrome(postfix):
            prefix = string[:i]
            return prefix + postfix + postfix[::-1]