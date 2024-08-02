def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    if not is_palindrome(s):
        new_s = s + s[::-1]
        new_s = new_s[:len(new_s)//2] + ''.join(reversed(new_s[len(new_s)//2+1:]))
    else:
        new_s = s
    return new_s