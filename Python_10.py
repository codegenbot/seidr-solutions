def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = string + reverse[0] 
    return new_string