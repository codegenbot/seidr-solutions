```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        middle_char = string[0]
        return string + middle_char + string[::-1] + middle_char