def make_palindrome(s: str) -> str:
    s = s.lower()
    new_s = ''
    for char in s:
        new_s += (char * 2)
    return new_s + s[::-1]