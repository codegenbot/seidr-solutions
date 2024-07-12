def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    new_string = ""
    while not is_palindrome(new_string + string + new_string):
        new_string += string[0]
    return new_string + string + new_string