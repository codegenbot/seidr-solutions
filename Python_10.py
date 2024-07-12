def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in 'abcdefghijklmnopqrstuvwxyz':
        new_string = char + string + char
        if new_string == new_string[::-1]:
            return new_string