def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string
    else:
        for i in range(len(string)):
            prefix = string[:i][::-1]
            postfix = string[i:]
            if postfix == postfix[::-1]:
                return prefix + postfix