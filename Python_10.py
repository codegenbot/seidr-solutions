def make_palindrome(string: str) -> str:
    n = len(string)
    for i in range(n):
        if string[i:] == string[i:][::-1]:
            return string + string[:i][::-1]
    return string + string[:-1][::-1]