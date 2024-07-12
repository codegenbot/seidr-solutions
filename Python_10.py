def make_palindrome(string: str) -> str:
    i = 0
    while i < len(string):
        if string[i:] == string[i:][::-1]:
            break
        i += 1
    return string + string[:i][::-1] if i > 0 else string