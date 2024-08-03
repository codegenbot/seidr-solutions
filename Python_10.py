def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + "a"

    for i in range(len(string)):
        new_string = string[:i] + string[i][::-1] + string[i + 1 :]
        if is_palindrome(new_string):
            return new_string
    return string + string[::-1]