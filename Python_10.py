```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in string:
        if string[:len(string)-1].replace(char, "") == (string[:len(string)-1].replace(char, ""))[::-1] and string[1:].replace(char, "") == (string[1:]).replace(char, "")[::-1]:
            return char + string + string[::-1]
    return string + string[::-1]