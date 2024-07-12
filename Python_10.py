```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in string:
        modified_string = string.replace(char, "")
        if modified_string == modified_string[::-1] and len(modified_string) > 0:
            return char + modified_string + modified_string[::-1]
    return string + string[::-1]