def make_palindrome(string: str) -> str:
    i = len(string)
    while i >= 0:
        if string[:i] == string[i-1::-1]:
            break
        i -= 1
    return string + string[i::-1] if i > 0 else string