def make_palindrome(string: str) -> str:
    for i in range(len(string) - 1, -1, -1):
        if string[:i + 1] == string[:i + 1][::-1]:
            return string + string[i:][::-1]