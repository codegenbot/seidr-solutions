def make_palindrome(s: str) -> str:
    for i in range(len(s), -1, -1):
        if s[:i] == s[:i][::-1]:
            return (
                s[: len(s) // 2].lower()
                + (s[len(s) // 2 : i][0]).upper()
                + s[i:][::-1].lower()
            )