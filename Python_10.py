def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string or string == string[::-1]:
        return string + string[0]
    for char in string:
        if string == string[::-1]:
            return string + char + string[0] + string[::-1][1:]
        new_string = string.replace(char, "")
        if is_palindrome(new_string):
            return char + char + string + char + char