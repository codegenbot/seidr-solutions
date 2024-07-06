```Python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s

    for char in "abcdefghijklmnopqrstuvwxyz":
        new_string = s + char
        if new_string == new_string[::-1]:
            return new_string