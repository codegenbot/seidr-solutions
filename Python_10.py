```
def make_palindrome(s: str) -> str:
    for i in range(len(s), 0, -1):
        if s[:i] == s[:i][::-1]:
            mid = len(s) // 2
            return (
                s[:mid].lower()
                + s[mid].upper()
                + "".join(reversed(s[i - 1:i]))
            )
    for i in range(len(s)):
        new_s = s[:i] + "a" + s[i:]
        if new_s == new_s[::-1]:
            return (
                new_s[:len(new_s) // 2].lower()
                + new_s[len(new_s) // 2].upper()
                + "".join(reversed(new_s[len(new_s) // 2 + 1:]))
            )
    return s