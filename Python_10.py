```
def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    half = len(string) // 2
    new_string = ""
    while not is_palindrome(new_string + string + new_string):
        if len(string) % 2 != 0:
            new_string += string[0]
        else: 
            new_string += string[:half]
    return new_string + string + new_string