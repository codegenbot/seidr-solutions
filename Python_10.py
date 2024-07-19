def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    i = len(string) - 1
    while i > len(string)//2:
        if string[:i] == string[:i][::-1]:
            break
        i -= 1
    return string + string[:i][::-1] if i < len(string) else string[1:][::-1] + string