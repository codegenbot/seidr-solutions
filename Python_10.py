```Python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s

    for char in 'abcdefghijklmnopqrstuvwxyz':
        for i in range(len(s)):
            new_string = s[:i] + char + s[i:]
            if new_string == new_string[::-1]:
                return new_string