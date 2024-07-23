def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    mid = len(s) // 2
    first_half = s[: mid + 1]
    second_half = s[-1:mid:-1] if len(s) % 2 != 0 else ""
    return first_half + second_half


print(make_palindrome("madam"))
print(make_palindrome("hello"))