def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + "a" * (len(string))
    i = 0
    while not is_palindrome(string[i:] + string[:i][::-1]):
        i += 1
    return string[:i] + string[i:][::-1]