def is_palindrome(s: str) -> bool:
    return s == s[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    while not is_palindrome(new_string):
        new_string = new_string[: n + 1] + "#"
        n -= 1
    palindrome = ""
    for i in range(len(new_string) - 1):
        if (i < n) or ((2 * n - 1) > i >= n and i % 2 != 0):
            palindrome += new_string[i]
    return palindrome