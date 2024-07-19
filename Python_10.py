def make_palindrome(string: str) -> str:
    i = len(string)
    while i > 0 and string[:i] != string[:i][::-1]:
        i -= 1
    return string + string[:i][::-1] if i < len(string) else string[:-1][::-1] + string