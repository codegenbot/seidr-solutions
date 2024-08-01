def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for char in string:
        new_string = (
            string[: string.index(char)]
            + string[string.rindex(char) + 1 :]
            + char
            + char
        )
        if new_string == new_string[::-1]:
            return new_string
    return ""