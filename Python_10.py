def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string:
        return ""
    else:
        if is_palindrome(string):
            return string + string
        else:
            for i in range(len(string)):
                if is_palindrome(string[:i] + string[i:][::-1]):
                    return string[:i] + string[i:][::-1] + string[i:][::-1]
            return string + string[::-1] + string[::-1]