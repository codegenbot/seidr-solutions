def make_palindrome(string: str) -> str:
    i = len(string)
    while i > len(string) / 2:
        if string[:i] == string[i-1::-1]:
            break
        i -= 1
    return string + string[i-1::-1] if i > len(string) / 2 else string