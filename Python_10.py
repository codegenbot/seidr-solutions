def is_palindrome(s: str) -> bool:
    return s == s[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    first_char = string[0]
    new_string = ""
    while not is_palindrome(new_string + string + new_string):
        for i in range(n):
            new_string += first_char
        new_string = ""
    return new_string + string + new_string