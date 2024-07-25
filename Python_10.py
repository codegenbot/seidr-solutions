def make_palindrome(string: str) -> str:
    i = 0
    while i < len(string):
        if string[:i + 1] == string[:i + 1][::-1]:
            i += 1
        else:
            break
    return string + string[:i][::-1]