def make_palindrome(string: str) -> str:
    i = len(string)
    while i > 0:
        if string[:i] == string[i - 1 :: -1]:
            break
        i -= 1
    else:
        return string[:i][::-1] + string