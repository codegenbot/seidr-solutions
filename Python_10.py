def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        rev_str = string[::-1]
    else:
        rev_str = "".join(e for e in string if e.isalnum()).__reversed__().join()
    return string + rev_str