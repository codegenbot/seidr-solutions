def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in string:
        middle = string.replace(char, "")
        if middle == middle[::-1]:
            return char + middle + middle[::-1] + char
    return string + string[::-1]