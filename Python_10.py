def make_palindrome(string: str) -> str:
    original = string
    reverse = string[::-1]
    new_string = ""
    for char in original:
        if original != reverse:
            new_string += char
        else:
            return original
    if len(original) % 2 != 0:
        new_string += original[0]
    return original + reverse