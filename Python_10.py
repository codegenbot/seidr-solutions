def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    for i in range(len(s), 0, -1):
        if s[:i] == s[:i][::-1]:
            return (
                string[: (len(string) - i) // 2]
                + s[:i][::-1]
                + string[(len(string) - i) // 2 :]
            )