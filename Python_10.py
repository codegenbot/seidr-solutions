def make_palindrome(string: str) -> str:
    i = 0
    while i < len(string) and string[i:] != string[i:][::-1]:
        i += 1
    return string + string[:i][::-1]