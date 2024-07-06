```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    
    for char in string:
        new_string = string[string.index(char):] + char + string[:string.index(char)][::-1]
        if new_string == new_string[::-1]:
            return new_string
    return None