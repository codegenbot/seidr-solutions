def make_palindrome(string: str) -> str:
    s = string.lower()
    for i in range(len(s), 0, -1):
        if not is_palindrome(s[:i]):
            break
    suffix = s[i-1::-1]
    prefix = s[1:i][::-1] + s[0]
    return prefix + s + suffix