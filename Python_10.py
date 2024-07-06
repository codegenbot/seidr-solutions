```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for char in string:
        postfix = string[1:]
        prefix = char + string[0][::-1] + postfix
        if postfix == postfix[::-1]:
            return prefix
    return None