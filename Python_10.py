def make_palindrome(string: str) -> str:
    i = len(string) - 1
    while i > len(string) // 2 and string[:i] != string[:i][::-1]:
        i -= 1
    return string + string[:i][::-1] if i < len(string) else string[:-1][::-1] + string