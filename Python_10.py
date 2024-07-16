def make_palindrome(string: str) -> str:
    i = len(string) - 1
    while i >= 0 and string[i:] != string[i:][::-1]:
        i -= 1
    return string + string[:i][::-1]