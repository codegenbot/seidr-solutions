def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in set(string):  
        added = char + string + string[::-1]
        if added == added[::-1]:
            return added
    return string + string[::-1]