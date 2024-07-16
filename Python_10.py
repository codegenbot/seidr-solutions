def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        s = string
    else:
        s = "".join(e for e in string if e.isalnum()).lower()
    while not is_palindrome(s):
        s += "a" + s[::-1]
    return s