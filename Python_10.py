def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            return string[:i] + string[i:][::-1] + string[i]