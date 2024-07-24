def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string) - 1, -1, -1):
        if string[:i] == string[:i][::-1]:
            return string + string[:i][::-1]
    return string