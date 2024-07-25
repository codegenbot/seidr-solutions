def make_palindrome(string: str) -> str:
    i = len(string)
    while i > 0:
        i -= 1
        if string[:i] == string[:i][::-1]:
            break
    return string + string[:i][::-1]