def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    i = 0
    j = len(string) - 1
    while i <= j and string[i] == string[j]:
        i += 1
        j -= 1
    palindrome_suffix = string[:i][::-1]
    if i >= j:
        return string + palindrome_suffix
    else:
        return string + palindrome_suffix + string[: j + 1][::-1]