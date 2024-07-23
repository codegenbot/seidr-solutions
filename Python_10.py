def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        prefix = ""
    else:
        for char in reversed(string):
            if char.isalpha() and not char.islower():
                break
            prefix += char
        prefix = prefix[::-1]
    return string + prefix + string[::-1]