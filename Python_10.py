def make_palindrome(s: str) -> str:
    if len(s) % 2 == 0:
        return s[:len(s) // 2] + s[:len(s) // 2][::-1]
    else:
        middle_char = s[len(s) // 2]
        return s + middle_char + s[::-1]