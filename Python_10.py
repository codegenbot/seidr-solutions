def make_palindrome(s: str) -> str:
    if len(s) % 2 == 0:
        return s[:len(s) // 2] + s[:len(s) // 2][::-1]
    else:
        return s[:len(s) // 2] + s[len(s) // 2] + s[len(s) // 2][::-1]