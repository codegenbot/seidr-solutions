def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in set(string):
        mid = string.replace(char, '')
        new_string = char + string[:len(mid)//2 + len(mid)//2] + mid[::-1] + char
        if new_string == new_string[::-1]:
            return new_string
    return string + string[::-1]