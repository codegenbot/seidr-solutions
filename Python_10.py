def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        reverse = string[::-1]
        for i in range(len(string)):
            if string[:i] + reverse != (string + reverse):
                return string + reverse[i:]
    else:
        lower_string = string.lower()
        for i in range(len(lower_string)):
            if lower_string[:i] + lower_string[::-1] != (
                lower_string + lower_string[::-1]
            ):
                return (lower_string[:i] + lower_string[::-1]).upper() + lower_string[
                    i:
                ].upper()
    return string + string[::-1]