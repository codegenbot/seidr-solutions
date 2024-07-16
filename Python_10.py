def make_palindrome(string: str) -> str:
    i = len(string)
    while i > 0:
        if string[:i] == string[:i][::-1]:
            break
        i -= 1
    return string if i == len(string) else string + string[:i][::-1]