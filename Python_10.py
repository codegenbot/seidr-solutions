def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        char = "*"
        while string + char + string[::-1] == (string + char + string[::-1])[:-1][::-1]:
            char += "*"
        return string + char + string[::-1][: len(string) - 1][::-1]
    return None