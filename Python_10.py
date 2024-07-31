def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        prefix = ""
        for i in range(len(string)):
            if string[: i + 1] == string[: i + 1][::-1]:
                prefix = string[: i + 1]
                break
        return string + string[::-1].lstrip()
    else:
        lower_string = string.lower()
        prefix = ""
        for i in range(len(lower_string)):
            if lower_string[: i + 1] == lower_string[: i + 1][::-1]:
                prefix = lower_string[: i + 1]
                break
        return (string[0].upper() + prefix) + (lower_string[::-1].lstrip().upper())