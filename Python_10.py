```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    
    result = ""
    for char in string:
        while len(result) + 1 < len(string):
            result += char
        result += char
    
    return result